#include "Includes.h"
#include "SDK.hpp"
#include "Tools.h"
#include "memory.h"
#include "Proc.h"
#include "base64/base64.h"
#include "Engine/Canvas.h"
#include "json.hpp"
#include "Log.h"
using json = nlohmann::ordered_json;
using namespace SDK;
using namespace std;
#include "UE4.h"

// ================================================================================================================================ //
uintptr_t g_UE4 = 0;
uintptr_t GWorld_Offset, GUObjectArray_Offset, GNames_Offset, CanvasMap_Offset, AimBullet_Offset;
uintptr_t OBWorld, OBLevel, OBGameInstance, OBPlayerController, OBPlayerCarry, MyOB,OBEntityCount,OBEntityEntry;
#define SLEEP_TIME 1000LL / 120LL
int g_screenWidth = 0, g_screenHeight = 0;
int screenWidth = 0, screenHeight = 0;

char extra[30];
int getEspFramerate;
std::string g_Token, g_Auth;
std::map<std::string, u_long> Config;
float gDistance;
bool bScanPatternCompleted = false;

ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
TArray<AActor *> g_Actors = TArray<AActor *>();

std::map<int, bool> itemConfig;
json itemData;
#define PI 3.14159265358979323846
// ================================================================================================================================ //
std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->GetName();
    }
    return s;
}

bool isObjectPlayer(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraPlayerCharacter::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectController(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraPlayerController::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectGrenade(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraGrenadeBase::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectVehicle(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraVehicleBase::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectLoot(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == APickUpWrapperActor::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectLootBox(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == APickUpListWrapperActor::StaticClass()) {
            return true;
        }
    }
    return false;
}

#define OFFSET_UCanvas_ViewProjectionMatrix 0x200
#define OFFSET_USceneComponent_ComponentToWorld 0x150
#define OFFSET_USkinnedMeshComponent_ComponentSpaceTransformsArray 0x5D0
#define OFFSET_USkinnedMeshComponent_CurrentReadComponentTransforms 0x5CC
#define OFFSET_WeaponManagerComponent 0xE34
#define OFFSET_CurrentWeaponReplicated 0x434
#define OFFSET_PGWorld 0x759f77c
#define OFFSET_WorldToNetDriver 0x24
#define OFFSET_PController 96
#define OFFSET_PersistentLevel 0x20
#define OFFSET_BasedMovementInfo_BasedMovement 0x330

FVector WorldToScreen(FVector pos) {
    FVector resultPos = {0, 0, 0};
    if (CanvasMap_Offset) {
        auto canvasMap = *(uintptr_t * )(CanvasMap_Offset);
        if (Tools::IsPtrValid((void *) canvasMap)) {
            auto Canvas = *(uintptr_t * )(canvasMap + (0x8 * 3) + 0x8);
            if (Tools::IsPtrValid((void *) Canvas)) {
                Matrix viewMatrix = *(Matrix *) (Canvas + OFFSET_UCanvas_ViewProjectionMatrix);

                float screenW = (viewMatrix.M[0][3] * pos.X) + (viewMatrix.M[1][3] * pos.Y) + (viewMatrix.M[2][3] * pos.Z + viewMatrix.M[3][3]);
                resultPos.Z = screenW;

                float screenY = (viewMatrix.M[0][1] * pos.X) + (viewMatrix.M[1][1] * pos.Y) + (viewMatrix.M[2][1] * pos.Z + viewMatrix.M[3][1]);
                float screenX = (viewMatrix.M[0][0] * pos.X) + (viewMatrix.M[1][0] * pos.Y) + (viewMatrix.M[2][0] * pos.Z + viewMatrix.M[3][0]);

                resultPos.Y = (g_screenHeight / 2) - (g_screenHeight / 2) * screenY / screenW;
                resultPos.X = (g_screenWidth / 2) + (g_screenWidth / 2) * screenX / screenW;
            }
        }
    }
    return resultPos;
}

FRotator ToRotator(FVector local, FVector target) {
    FVector rotation;
    rotation.X = local.X - target.X;
    rotation.Y = local.Y - target.Y;
    rotation.Z = local.Z - target.Z;
 
    FRotator newViewAngle = {0};
 
    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
 
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) PI);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) PI);
    newViewAngle.Roll = (float) 0.f;
 
    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;
 
    return newViewAngle;
}
 
FVector GetBoneLocation(ASTExtraPlayerCharacter *Actor, FName Name) {
    auto Mesh = Actor->Mesh;
    if (Mesh) {
        auto Idx = Mesh->GetBoneIndex(Name);
        if (Idx != -1) {
            auto CurrentReadComponentTransforms = *(int *) ((uintptr_t) Mesh + OFFSET_USkinnedMeshComponent_CurrentReadComponentTransforms);
            if (CurrentReadComponentTransforms >= 0 && CurrentReadComponentTransforms <= 1) {
                auto ComponentSpaceTransforms = *(TArray<FTransform> *) ((uintptr_t) Mesh + (OFFSET_USkinnedMeshComponent_ComponentSpaceTransformsArray + (CurrentReadComponentTransforms * 0xC)));
                if (ComponentSpaceTransforms.IsValidIndex(Idx)) {
                    auto ComponentToWorld = *(FTransform *) ((uintptr_t) Mesh + OFFSET_USceneComponent_ComponentToWorld);
                    auto Bone = ComponentSpaceTransforms[Idx];
                    return TransformToLocation(ComponentToWorld, Bone);
                }
            }
        }
    }
    return {0, 0, 0};
}

FVector GetBoneLocation(ASTExtraPlayerCharacter *Actor, int Idx) {
    auto Mesh = Actor->Mesh;
    if (Mesh) {
        auto CurrentReadComponentTransforms = *(int *)((uintptr_t) Mesh + OFFSET_USkinnedMeshComponent_CurrentReadComponentTransforms);
        if (CurrentReadComponentTransforms >= 0 && CurrentReadComponentTransforms <= 1) {
            auto ComponentSpaceTransforms = *(TArray<FTransform> *) ((uintptr_t) Mesh + (OFFSET_USkinnedMeshComponent_ComponentSpaceTransformsArray + (CurrentReadComponentTransforms * 0xC)));
            if (ComponentSpaceTransforms.IsValidIndex(Idx)) {
                auto ComponentToWorld = *(FTransform *) ((uintptr_t) Mesh + OFFSET_USceneComponent_ComponentToWorld);
                auto Bone = ComponentSpaceTransforms[Idx];
                return TransformToLocation(ComponentToWorld, Bone);
            }
        }
    }
    return {0, 0, 0};
}

// ================================================================================================================================ //
ASTExtraPlayerCharacter *GetTargetByDistance() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto localPlayer = g_LocalPlayer;

    TArray<AActor *> Actors = g_Actors;

    FVector LocalPos{0, 0, 0}, ViewPos{0, 0, 0};
    if (localPlayer) {
        LocalPos = GetBoneLocation(localPlayer, 0);
        ViewPos = GetBoneLocation(localPlayer, 6);
        ViewPos.Z += 15.f;
    }

    UWorld *GWorld = *(UWorld **) (GWorld_Offset);
    if (GWorld) {
        if (localPlayer) {
            for (int i = 0; i < Actors.Num(); i++) {
                if (Actors[i] && isObjectPlayer(Actors[i])) {
                    auto Actor = (ASTExtraPlayerCharacter *) Actors[i];
                    if (Actor->PlayerKey == localPlayer->PlayerKey)
                        continue;

                    if (Actor->TeamID == localPlayer->TeamID)
                        continue;

                    if (Actor->bDead)
                        continue;

                    if (Config["AIM::VISCHECK"]) {
                        FHitResult out;
                        if (UKismetSystemLibrary::LineTraceSingle(GWorld, ViewPos, GetBoneLocation(Actor, 6), ETraceTypeQuery::TraceTypeQuery1, true, Actors, EDrawDebugTrace::EDrawDebugTrace__None, 0.0f, true, {}, {}, &out)) {
                            continue;
                        }
                    }

                    if (Config["AIM::KNOCKED"]) {
                        if (Actor->Health == 0.0f)
                            continue;
                    }
                    float dist = FVector::Distance(LocalPos, GetBoneLocation(Actor, 0));
                    if (dist < max) {
                        max = dist;
                        result = Actor;
                    }
                }
            }
        }
    }

    return result;
}

bool isInsideFOV(int x, int y) {
    if (!Config["AIM::SIZE"])
        return true;

    int circle_x = g_screenWidth / 2;
    int circle_y = g_screenHeight / 2;
    int rad = Config["AIM::SIZE"];
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}

ASTExtraPlayerCharacter *GetTargetByCrosshairDistance() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    UWorld *GWorld = *(UWorld **) (GWorld_Offset);
    if (GWorld) {
        auto localPlayer = g_LocalPlayer;

        TArray<AActor *> Actors = g_Actors;

        FVector LocalPos{0, 0, 0}, ViewPos{0, 0, 0};
        if (localPlayer) {
            LocalPos = GetBoneLocation(localPlayer, 0);
            ViewPos = GetBoneLocation(localPlayer, 6);
            ViewPos.Z += 15.f;
        }

        if (localPlayer) {
            for (int i = 0; i < Actors.Num(); i++) {
                if (Actors[i] && isObjectPlayer(Actors[i])) {
                    auto Actor = (ASTExtraPlayerCharacter *) Actors[i];
                    if (Actor->PlayerKey == localPlayer->PlayerKey)
                        continue;

                    if (Actor->TeamID == localPlayer->TeamID)
                        continue;

                    if (Actor->bDead)
                        continue;

                    if (Config["AIM::VISCHECK"]) {
                        FHitResult out;
                        if (UKismetSystemLibrary::LineTraceSingle(GWorld, ViewPos, GetBoneLocation(Actor, 6), ETraceTypeQuery::TraceTypeQuery1, true, Actors, EDrawDebugTrace::EDrawDebugTrace__None, 0.0f, true, {}, {}, &out)) {
                            continue;
                        }
                    }

                    if (Config["AIM::KNOCKED"]) {
                        if (Actor->Health == 0.0f)
                            continue;
                    }

                    auto Root = GetBoneLocation(Actor, 0);
                    auto Head = GetBoneLocation(Actor, 6);

                    FVector RootSc = WorldToScreen(Root);
                    FVector HeadSc = WorldToScreen(Head);
                    if (RootSc.Z > 0 && HeadSc.Z > 0) {
                        float height = abs(HeadSc.Y - RootSc.Y);
                        float width = height * 0.65f;

                        FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                        if ((middlePoint.X >= 0 && middlePoint.X <= g_screenWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= g_screenHeight)) {
                            FVector2D v2Middle = FVector2D((float) (g_screenWidth / 2), (float) (g_screenHeight / 2));
                            FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                            if (isInsideFOV((int) middlePoint.X, (int) middlePoint.Y)) {
                                float dist = FVector2D::Distance(v2Middle, v2Loc);

                                if (dist < max) {
                                    max = dist;
                                    result = Actor;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return result;
}

Vector2 pushToScreenBorder(Vector2 Pos, Vector2 screen, int borders, int offset) {
    int x = (int)Pos.X;
    int y = (int)Pos.Y;
    if ((borders & 1) == 1) {
        y = 0 - offset;
    }
    if ((borders & 2) == 2) {
        x = (int)screen.X + offset;
    }
    if ((borders & 4) == 4) {
        y = (int)screen.Y + offset;
    }
    if ((borders & 8) == 8) {
        x = 0 - offset;
    }
    return Vector2(x, y);
}
int isOutsideSafezone(Vector2 pos, Vector2 screen) {
    Vector2 mSafezoneTopLeft(screen.X * 0.04f, screen.Y * 0.04f);
    Vector2 mSafezoneBottomRight(screen.X * 0.96f, screen.Y * 0.96f);

    int result = 0;
    if (pos.Y < mSafezoneTopLeft.Y) {
        result |= 1;
    }
    if (pos.X > mSafezoneBottomRight.X) {
        result |= 2;
    }
    if (pos.Y > mSafezoneBottomRight.Y) {
        result |= 4;
    }
    if (pos.X < mSafezoneTopLeft.X) {
        result |= 8;
    }
    return result;
}


static Canvas *m_Canvas = 0;


uint64_t GetTickCount()
{
	using namespace std::chrono;
	return duration_cast < milliseconds > (steady_clock::now().time_since_epoch()).count();
}

class Interval
{
  private:
	int initial_;

  public:
	  inline Interval():initial_(GetTickCount())
	{
	}

	virtual ~ Interval()
	{
	}

	inline unsigned int value() const
	{
		return GetTickCount() - initial_;
	}
};

class FPS
{
  protected:
	int32_t m_fps;
	int32_t m_fpscount;
	Interval m_fpsinterval;

  public:
	  FPS():m_fps(0), m_fpscount(getEspFramerate)
	{
	}

	void Update()
	{
		m_fpscount++;
		if (m_fpsinterval.value() > 1000)
		{
			m_fps = m_fpscount;
			m_fpscount = getEspFramerate;
			m_fpsinterval = Interval();
		}
	}

	int32_t get() const
	{
		return m_fps;
	}
};
FPS m_fps;
// ================================================================================================================================ //
void native_onCanvasDraw(JNIEnv *env, jobject obj, jobject canvas, int screenWidth, int screenHeight, float screenDensity) {
	static Canvas *m_Canvas = 0;
    if (!m_Canvas) {
        LOGI("Canvas Object: %p | Screen Width: %d | Screen Height: %d | Density: %f", canvas, screenWidth, screenHeight, screenDensity);
        m_Canvas = new Canvas(env, screenWidth, screenHeight, screenDensity);
    }

    m_Canvas->UpdateCanvas(canvas);
	
	 
    g_screenWidth = screenWidth;
    g_screenHeight = screenHeight;
	  
    if (!bScanPatternCompleted)
        return;
	Running()
	;
    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localController = 0;
    TArray<AActor *> Actors = TArray<AActor *>();

    g_screenWidth = screenWidth;
    g_screenHeight = screenHeight;

    m_fps.Update();
    std::string Str = std::string(("TheMoodRISER FPS : "));
    Str += std::to_string((int) m_fps.get());
    if (Config["SETTING_FRAMERATE"] == 0) {
		getEspFramerate = 30;
    }
    if (Config["SETTING_FRAMERATE"] == 1) {
		getEspFramerate = 60;
    }
    if (Config["SETTING_FRAMERATE"] == 2) {
		getEspFramerate = 100;
    }
    if (Config["SETTING_FRAMERATE"] == 3) {
		getEspFramerate = 130;
	}
    if (Config["SETTING_LOW_MODE"]) {
        m_Canvas->LowMode(true);
	  }else{
        m_Canvas->LowMode(false);
	}
	
    libbase = GetGameBase(target_pid2);
	OBWorld = getPtr(libbase + OFFSET_PGWorld);
	OBGameInstance = getPtr(OBWorld + OFFSET_WorldToNetDriver);
	OBPlayerController = getPtr(OBGameInstance + OFFSET_PController);
	OBPlayerCarry = getPtr(OBPlayerController + OFFSET_PersistentLevel);
	MyOB = getPtr(OBPlayerCarry + OFFSET_BasedMovementInfo_BasedMovement);	 
    UWorld *GWorld = *(UWorld **) (GWorld_Offset);
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            Actors = *(TArray<AActor *> *)((uintptr_t)PersistentLevel + 0x70);

            for (int i = 0; i < Actors.Num(); i++) {
                if (isObjectController(Actors[i])) {
                    localController = (ASTExtraPlayerController *) Actors[i];
                    break;
                }
            }
         /*if (localController == 0){
                m_Canvas->drawText(("    𝘞𝘢𝘪𝘵𝘪𝘯𝘨 𝘱𝘭𝘢𝘺𝘦𝘳 𝘪𝘯 𝘨𝘢𝘮𝘦 ...\n"), screenWidth / 15 + 15, screenHeight / 28, 18.0f, Align::CENTER, ARGB(255,255,0,0), BLACK);
              }else{
              if (!Config["SETTING_HIDE_FPS"]) {
                  m_Canvas->drawText(Str.c_str(), screenWidth / 15 + 8, screenHeight / 28, 20.0f, Align::CENTER, ARGB(255,0,255,0), BLACK);
		       }
			}
*/
            if (localController) {
                localController->AntiCheatManagerComp = 0;

                for (int i = 0; i < Actors.Num(); i++) {
                    if (isObjectPlayer(Actors[i])) {
                        auto Player = (ASTExtraPlayerCharacter *) Actors[i];
                        if (Player->PlayerKey == localController->PlayerKey) {
                            localPlayer = Player;
                            break;
                        }
                    }
                }             

                int totalEnemies = 0, totalBots = 0,grenadeCount = 0;

                FVector LocalPos{0, 0, 0}, ViewPos{0, 0, 0};
                if (localPlayer) {
                    localPlayer->MoveAntiCheatComponent = 0;
                    localPlayer->LagCompensationComponent = 0;

                    LocalPos = GetBoneLocation(localPlayer, 0);
                    ViewPos = GetBoneLocation(localPlayer, 6);
                    ViewPos.Z += 15.f;
                }

                auto PlayerCameraManager = localController->PlayerCameraManager;
                if (PlayerCameraManager) {
                    ViewPos = PlayerCameraManager->CameraCache.POV.Location;
                }

                for (int i = 0; i < Actors.Num(); i++) {
                    if (isObjectPlayer(Actors[i])) {
                        auto Player = (ASTExtraPlayerCharacter *) Actors[i];

                        auto RootComponent = Player->RootComponent;
                        if (!RootComponent)
                            continue;

                        float Distance = FVector::Distance(LocalPos, RootComponent->RelativeLocation) / 100.f;
                        float DistView = FVector::Distance(LocalPos, ViewPos);
                        if (localPlayer) {
                            if (Player->PlayerKey == localPlayer->PlayerKey)
                                continue;

                            if (Player->TeamID == localPlayer->TeamID)
                                continue;
                        }

                        if (Player->bDead)
                            continue;

                        if (Player->bIsAI)
                            totalBots++;
                        else totalEnemies++;

										 
                        FVector HeadPos = GetBoneLocation(Player, 6);
                        HeadPos.Z += 12.5f;

                        FVector RootPos = GetBoneLocation(Player, 0);
                        FVector NeckPos = GetBoneLocation(Player, 5);
						
                        FVector HeadSc = WorldToScreen(HeadPos);
                        FVector RootSc = WorldToScreen(RootPos);
					    FVector NeckSc = WorldToScreen(NeckPos);
						
                        /*FVector2D screen(screenWidth, screenHeight);
                        FVector2D location(RootSc.X,HeadSc.Y);*/
						
						Vector2 screen(screenWidth, screenHeight);
                        Vector2 location(RootSc.X,HeadSc.Y);
						
						float mScale = screenHeight / (float) 1080;   
						
					    float xHead = HeadSc.X;
                        float yHead = HeadSc.Y;
                        float magic_number = (DistView);
                        float LocZ = LocalPos.Z;
                        float mx = (screenWidth / 4) / magic_number;
                        float my = (screenWidth / 1.38) / magic_number;
                        float posTop = yHead - my + (screenWidth / 1.7) / magic_number;
                        float bottom = yHead + my + screenHeight / 4 / magic_number;
                        float boxHeight = fabsf(RootSc.Y - HeadSc.Y);
                        float boxWidth = boxHeight * 0.68;
                        Rect2 Box(HeadSc.X - (boxWidth / 2), HeadSc.Y, boxWidth, boxHeight);
                        float healthLength = screenWidth / 15;
                        if (healthLength < mx) healthLength = mx;
					    
					    int SCOLOR = WHITE;
						
					          if (Config["ENABLE_AIM"])
                        {
                            float centerDist = sqrt((HeadSc.X - screenWidth / 2) * (HeadSc.X - screenWidth / 2) + (HeadSc.Y - screenHeight / 2) * (HeadSc.Y - screenHeight / 2));

                            if (!Config["AIM_HIDE_TARGET_TEXT"])
                            {
                                float dist = g_LocalPlayer->GetDistanceTo(Player);
                                if (centerDist < 30)
                                {
                                    m_Canvas->drawText(("*Target"), HeadSc.X, HeadSc.Y, 8.0f, Align::CENTER, dist < 100.f ? RED : PURPLE, BLACK);
                                }
                            }
                        }

						if (HeadSc.Z > 0 && RootSc.Z > 0)
						{

							if (Config["ESP::SKELETON"])
							{
								
                                std::vector<std::string> right_arm{"spine_03", "upperarm_r", "lowerarm_r", "hand_r", "item_r"};
                                std::vector<std::string> left_arm{"spine_03", "upperarm_l", "lowerarm_l", "hand_l", "item_l"};
                                std::vector<std::string> spine{"spine_03", "spine_02", "spine_01", "pelvis"};
                                std::vector<std::string> lower_right{"pelvis", "thigh_r", "calf_r", "foot_r"};
                                std::vector<std::string> lower_left{"pelvis", "thigh_l", "calf_l", "foot_l"};
                                std::vector<std::vector<std::string>> skeleton{right_arm, left_arm, spine, lower_right, lower_left};

							    for (std::vector<std::string> &boneStructure : skeleton) {
                                     std::string lastBone;
                                  for (std::string &currentBone : boneStructure) {
									if (!lastBone.empty())
                                    {
                                        FVector boneFrom = WorldToScreen(GetBoneLocation(Player, lastBone.c_str()));
                                        FVector boneTo = WorldToScreen(GetBoneLocation(Player, currentBone.c_str()));
                                        if (lastBone.empty())
                                        {
                                            lastBone = currentBone;
                                            continue;
                                        }

                                        if (boneFrom.Z > 0 && boneTo.Z > 0)
                                        {
                                            m_Canvas->drawHead(Vector2(NeckSc.X, NeckSc.Y - 5),boxWidth / 6.5f, 1.5f, SCOLOR);

                                            m_Canvas->drawLine(boneFrom.X, boneFrom.Y, boneTo.X, boneTo.Y, 2.0f, SCOLOR);
										}
                                    }
								lastBone = currentBone;
							}
                        }
                    }

							if (Config["ESP::LINE"])
							{
								m_Canvas->drawLine(screenWidth / 2, 0, HeadSc.X, HeadSc.Y - 5, 0.80f, GetRandomColorByIndexLine(Player->TeamID));
							}


							if (Config["ESP::BOX"])
							{
                                //Make3DBox(Actors[i],boxWidth, -boxHeight, RED);
                                m_Canvas->drawBox4Line(2, HeadSc.X - (boxWidth / 2), HeadSc.Y,boxWidth, boxHeight, GetRandomColorByIndexLine(Player->TeamID));
							}

							if (Config["ESP::HEALTH"] == 1 || Config["ESP::HEALTH"] == 2)
                            {
                                int CurHP = (int) std::max(0, std::min((int) Player->Health,
                                                                       (int) Player->HealthMax));
                                int MaxHP = (int) Player->HealthMax;

                                long curHP_Color = ARGB(200, std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((510 * CurHP) / MaxHP), 255), 0);

                                if (Player->Health == 0.0f && !Player->bDead)
                                {
                                    curHP_Color = ARGB(255, 255, 0, 0);

                                    CurHP = Player->NearDeathBreath;
                                    if (Player->NearDeatchComponent)
                                    {
                                        MaxHP = Player->NearDeatchComponent->BreathMax;
                                    }
                                }

                                FVector AboveHead = GetBoneLocation(Player, 6);
                                AboveHead.Z += 35.f;
                                FVector AboveHeadSc = WorldToScreen(AboveHead);

                                if (AboveHeadSc.Z > 0)
                                {
                                    if (Config["ESP::HEALTH"] == 1)
                                    {
                                        float boxWidth = boxHeight * 0.58;
                                        Rect2 PlayerRect(HeadSc.X - (boxWidth / 2), HeadSc.Y, boxWidth, boxHeight);

                                        if (Player->Health == 0.0f)
                                        {
                                            m_Canvas->drawVerticalHealthBar(Vector2(PlayerRect.x + PlayerRect.width, PlayerRect.y), boxHeight, 100, CurHP);
                                        } else {
                                            m_Canvas->drawVerticalHealthBar(Vector2(PlayerRect.x + PlayerRect.width, PlayerRect.y), boxHeight, MaxHP, CurHP);
                                        }
                                    }
                                    if (Config["ESP::HEALTH"] == 2)
                                    {
                                        if (Config["ESP::TEAMID"])
                                        {
                                            m_Canvas->drawBoxEnemy(Vector2(xHead - healthLength, yHead - 60), Vector2(xHead - healthLength + 35, yHead - 60), 30, GetRandomColorByIndexBack(Player->TeamID));
                                        }

                                            int colorLine = GetRandomColorByIndexAlpa(Player->TeamID);
                                            int colorText = GetRandomColorByIndexBack(Player->TeamID);//Color(60, 60, 60, 180);
                                            m_Canvas->drawBoxEnemy(Vector2(xHead - healthLength, yHead - 60), Vector2(xHead + healthLength, yHead - 60), 30, colorLine);


                                            FVector rKn = WorldToScreen(GetBoneLocation(Player, 58));
                                            int healthColor = WHITE;
                                            Vector2 v = Vector2(xHead - healthLength + 12 + (2 * healthLength) * CurHP / MaxHP, yHead - 45);
                                            if ((int) Player->Health == 0)
                                            {
                                                healthColor = RED;
                                                v = Vector2(xHead - healthLength + 12 + (2 * healthLength) * CurHP / 100, yHead - 45);
                                                m_Canvas->drawTextName("Knocked", Vector2(rKn.X, rKn.Y + 50), 12.f, Align::CENTER, RED);
                                            }

                                            m_Canvas->drawTextName("▼", Vector2(xHead, yHead - 28), 30.f, Align::CENTER, healthColor);

                                            m_Canvas->drawBoxEnemy(Vector2(xHead - healthLength - 12, yHead - 45),v, 5, healthColor);
                                    }
                                }
                            }
							int borders = isOutsideSafezone(location, screen);
							if (Config["ESP::ALERT"] && borders != 0)
							{
								sprintf(extra, "%0.0fM", Distance);
								Vector2 hintDotRenderPos = pushToScreenBorder(location, screen, borders, (int)((mScale * 100) / 3));
								Vector2 hintTextRenderPos = pushToScreenBorder(location, screen, borders, -(int)((mScale * 36)));

								m_Canvas->drawCircleAlert(hintDotRenderPos, (mScale * 100),  0xF2E9E9E9);

								m_Canvas->drawTextName(extra, hintTextRenderPos, 15, Align::CENTER, BLACK);
							}

							if (Config["ESP::NAME"])
							{
								FVector BelowRoot = RootPos;
								BelowRoot.Z -= 35.f;
								FVector BelowRootSc = WorldToScreen(BelowRoot);
								int NameColor;

								if (BelowRootSc.Z > 0)
								{
									std::wstring ws;
									if (Player->bIsAI)
									{
										NameColor = ARGB(255, 000, 255, 000);
										if (Player->PlayerName.IsValid())
											ws += L"[";
										    ws += L"Bots] ";
										    ws += Player->PlayerName.ToWString();
									}
									else if (Player->PlayerName.IsValid())
									{
										NameColor = YELLOW;
										ws = Player->PlayerName.ToWString();
									}
									if (Config["ESP::HEALTH"] == 1)
									{
										m_Canvas->drawText(ws.c_str(), HeadSc.X, posTop - 15, 12.f, Align::CENTER, Player->bIsAI ? ARGB(255,000, 255, 000)   : ARGB(255, 50, 255, 255), BLACK);
									}
									else if (Config["ESP::HEALTH"] == 2)
									{
                                        m_Canvas->drawTextName(ws.c_str(), Vector2(xHead, yHead - 53), 14.f, Align::CENTER, WHITE);
									}
									else
									{
										m_Canvas->drawText(ws.c_str(), HeadSc.X, posTop - 15, 12.f, Align::CENTER, Player->bIsAI ? ARGB(255, 000, 255, 000)   : ARGB(255, 50, 255, 255), BLACK);
									}
								}
							}


							if (Config["ESP::DISTANCE"])
							{
								FVector BelowRoot = RootPos;
								BelowRoot.Z -= 35.f;
								FVector BelowRootSc = WorldToScreen(BelowRoot);
								int DistanceColor;

								if (BelowRootSc.Z > 0)
								{
									std::wstring ws;
									if (Config["ESP::HEALTH"] == 1)
									{
										ws += L"[ ";
										ws += std::to_wstring((int)Distance);
										ws += L" M ]";
										DistanceColor = WHITE;
									}
									else
									{
										ws += std::to_wstring((int)Distance);
										ws += L" M";
										DistanceColor = WHITE;
									}
									if (Player->bIsAI)
									{
										DistanceColor = ARGB(255, 000, 255, 000);
									}


									float mFontScale = std::max(12.0f, 10.f - (DistView / 75.0f));
									auto mText = m_Canvas->getTextBounds(ws.c_str(), 0, ws.size());
									if (Config["ESP::HEALTH"] == 1)
									{
										m_Canvas->drawText(ws.c_str(), BelowRootSc.X, BelowRootSc.Y + mText->getHeight(), mFontScale, Align::CENTER, WHITE, BLACK);
									}
									if (Config["ESP::HEALTH"] == 2)
									{
                                        float a = 20;
                                        if (Player->Health >= 100)
                                        {
                                            a = 20;
                                        }
                                        m_Canvas->drawTextName(ws.c_str(), Vector2(xHead + healthLength - a, yHead - 53), 14.f, Align::CENTER, ARGB(255, 255, 255, 255));

										//m_Canvas->drawTextName(ws.c_str(), Vector2(xHead + healthLength, posTop - 23), 12.f, Align::RIGHT, DistanceColor);
									}
									else
									{
										m_Canvas->drawText(ws.c_str(), BelowRootSc.X, BelowRootSc.Y + mText->getHeight(), mFontScale, Align::CENTER, WHITE, BLACK);
									}
								}
							}
                            if (Config["ESP::TEAMID"])
                            {
                                int tColors = WHITE;
                                std::string sTeamID;
                                float a = 18;
                                if (Player->Health >= 100)
                                {
                                    a = 18;
                                }
                                sTeamID += std::to_string((int)Player->TeamID);

                                if (Config["ESP::HEALTH"] == 1)
                                {
                                    m_Canvas->drawTextName(sTeamID.c_str(), Vector2(xHead - healthLength + a, yHead - 53), 0, Align::CENTER, ARGB(000,000,000,000));
                                }
                                else
                                {
                                    m_Canvas->drawTextName(sTeamID.c_str(),Vector2(xHead - healthLength + a, yHead - 53), 14.f, Align::CENTER, tColors);
                                }
                            }
						}
					}

					if (Config["ESP::WARNING"])
					{
						if (isObjectGrenade(Actors[i]))
						{
							auto RootComponent = Actors[i]->RootComponent;
							if (!RootComponent)
								continue;

							if (RootComponent != 0)
							{
								gDistance = FVector::Distance(LocalPos,  RootComponent->RelativeLocation) / 100.f;
								FVector gLocation = WorldToScreen(RootComponent->RelativeLocation);
								grenadeCount++;

								if (gDistance <= 200.f)
								{
									//m_Canvas->drawText(OBFUSCATE("!!! WARNING THERE IS GRENADE NEAR YOU !!!"), screenWidth / 2, 160, 20.f, Align::CENTER, RED, BLACK);
									if (gLocation.Z > 0)
									{
										char grenadeAlert[100];
										m_Canvas->drawLine(screenWidth / 2, 160, gLocation.X, gLocation.Y - 5, 1.0f, ARGB(255, 255, 000, 000));
										sprintf(grenadeAlert, ("[ALERT] Grenade [%0.0fM] !!"), gDistance);
										m_Canvas->drawText(grenadeAlert, gLocation.X, gLocation.Y, 15.0f, Align::CENTER, RED, BLACK);
									}
								}
							}
						}
					}
					
                    if (Config["ESP::VEHICLE"]) {
                        if (isObjectVehicle(Actors[i])) {
                            ASTExtraVehicleBase *Vehicle = (ASTExtraVehicleBase *) Actors[i];

                            auto RootComponent = Vehicle->RootComponent;
                            if (!RootComponent)
                                continue;
								int CurHP = (int) std::max(0, std::min((int) Vehicle->VehicleCommon->HP, (int) Vehicle->VehicleCommon->HPMax));
                                int MaxHP = (int) Vehicle->VehicleCommon->HPMax;
                                long curHP_Color = ARGB(155, std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((510 * CurHP) / MaxHP), 255), 0);

                                float Distance = FVector::Distance(LocalPos, RootComponent->RelativeLocation) / 100.f;
                            if (Distance <= 500.f) {
                                FVector Location = WorldToScreen(RootComponent->RelativeLocation);
                                if (Location.Z > 0) {		
								    auto mWidthScale = std::min(0.10f * Distance, 50.f);
                                    auto mWidth = m_Canvas->scaleSize(50.f) - mWidthScale;
                                    auto mHeight = mWidth * 0.150f;									
                                    std::string s = GetVehicleName(Vehicle);								
									s += " [";
                                    s += std::to_string((int) Distance);
                                    s += "m]";	
									s += " [Bensin:";
			                        s += std::to_string((int)(100 * Vehicle->VehicleCommon->Fuel / Vehicle->VehicleCommon->FuelMax));
                                    s += "]";									
									float mFontScale = std::max(5.0f, 10.f - (Distance / 85.0f));
                                    auto mText = m_Canvas->getTextBounds(s.c_str(), 0, s.size());
							  if (Config["FIGHT::MODE"]) {
                                    m_Canvas->drawText(s.c_str(), Location.X, Location.Y + mText->getHeight(), 0.0f, Align::CENTER, PURPLE, BLACK);
						            }else{
                                    m_Canvas->drawText(s.c_str(), Location.X, Location.Y + mText->getHeight(), 15.0f, Align::CENTER, ARGB(255,50,255,255), BLACK);     					            
									Location.X -= (mWidth / 2);
                                    Location.Y -= (mHeight * 2.f);
									m_Canvas->drawBox(Location.X , Location.Y, (CurHP * mWidth / MaxHP), mHeight, curHP_Color);
                                    m_Canvas->drawBorder(Location.X, Location.Y, mWidth, mHeight, 1.0f, BLACK);
                                }
							}
                         }
                      }
				   }  
					
				  if (Config["ESP::LOOTBOX"]) {
                    if (isObjectLootBox(Actors[i])) {
                        APickUpListWrapperActor *LootBox = (APickUpListWrapperActor *) Actors[i];
                       
                        if (!LootBox)
                            continue;

                        float  Distance = FVector::Distance(LocalPos, LootBox->RootComponent->RelativeLocation) / 100.f;                                     
						FVector Location = WorldToScreen(LootBox->RootComponent->RelativeLocation);
						
                          if (Distance < 300.f) {
                              if (Location.Z > 0) {
                                  std::string s;
                                  s = "LootBox (";
                                  s += std::to_string((int) Distance);
                                  s += ")";
								
									
								  if (Config["FIGHT::MODE"]) {
                                        m_Canvas->drawText(s.c_str(), Location.X, Location.Y, 0.0f, Align::CENTER, PURPLE, BLACK);
										}else{
                                        m_Canvas->drawText(s.c_str(), Location.X, Location.Y, 15.0f, Align::CENTER, ARGB(255,50,255,255), BLACK);
										}
                                    }
                                 }
                              }
				           }
                 	if (Config["ESP::WARNING"]){
					if (grenadeCount > 0)
					{
						std::string s;
						s += "!!! WARNING THERE IS (";
						s += std::to_string((int) grenadeCount);
						s += ") GRENADE NEAR YOU [ ";
						s += std::to_string((int) gDistance);
						s += "M ] !!!";
						m_Canvas->drawText(s.c_str(), screenWidth / 2, 160, 20.f, Align::CENTER,
										   RED, BLACK);
					}
				}   
				    if (isObjectLoot(Actors[i])) {
			               APickUpWrapperActor *PickUp = (APickUpWrapperActor *) Actors[i];
                           if (itemConfig[PickUp->DefineID.TypeSpecificID]) {
	                            std::string s;
	                                unsigned long tc = 0xFF000000, oc = 0xFFFFFFFF;
 
	                            for (auto &e : itemData) {
		                   if (e["itemId"] == PickUp->DefineID.TypeSpecificID) {
			                     s = e["itemName"].get<std::string>();
			                     tc = strtoul(e["itemTextColor"].get<std::string>().c_str(), 0, 16);
		                         oc = strtoul(e["itemOutlineColor"].get<std::string>().c_str(), 0, 16);
			                     break;
		                        }
	                        }              
	                           FVector Location = WorldToScreen(PickUp->K2_GetActorLocation());
	                           if (Location.Z > 0) {
		                     m_Canvas->drawText(s.c_str(), Location.X, Location.Y, 7.5f, Align::CENTER, tc, oc);
	                 }
                 }
			 }
          }
                     
         /* if (!Config["SETTING_HIDE_ENEMIES"]) {
                if (totalBots + totalEnemies > 0)
                if (totalBots){
                     sprintf(extra, ("Enemies Nearby: %d (%d Bots)"), totalEnemies,totalBots);
                     m_Canvas->drawText(extra, screenWidth / 2, 120, 25, Align::CENTER, ARGB(255,0,255,0), BLACK);
                } else {
                    sprintf(extra, ("Enemies Nearby: %d"), totalEnemies);
                    m_Canvas->drawText(extra, screenWidth / 2, 120, 25, Align::CENTER, ARGB(255,0,255,0), BLACK);
                } else {
                    sprintf(extra, ("Enemies Nearby: %d"), totalEnemies);
                    m_Canvas->drawText(extra, screenWidth / 2, 120, 25, Align::CENTER, ARGB(255,0,255,0), BLACK);
	        	}
	       }*/
            if (Config["ENABLE::AIM"]) {
             if (Config["AIMBOT::TARGET"] == 1) {
                  m_Canvas->drawCircle(screenWidth / 2, screenHeight / 2, Config["AIM::SIZE"], 1.0f, false, WHITE);
              }
		   }
		}
	}
}
    g_LocalPlayer = localPlayer;
    g_LocalController = localController;
    g_Actors = Actors;
}

// ================================================================================================================================ //
void *Memory_Thread(void *) {
    uint8_t shellCode_AimBullet[] = {0x14, 0x10, 0x9F, 0xE5, 0x14, 0x20, 0x9F, 0xE5, 0x14, 0x30, 0x9F, 0xE5, 0x00, 0x10, 0x80, 0xE5, 0x04, 0x20, 0x80, 0xE5, 0x08, 0x30, 0x80, 0xE5, 0x1E, 0xFF, 0x2F, 0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    uint8_t origCode_AimBullet[40]{0x00};

		
    while (true) {
        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();


        ASTExtraPlayerCharacter *localPlayer = 0;
        ASTExtraPlayerController *localPlayerController = 0;
        TArray<AActor *> Actors = TArray<AActor *>();
		
        if (bScanPatternCompleted) {	     
	     libbase = GetGameBase(target_pid2);
	     OBWorld = getPtr(libbase + OFFSET_PGWorld);
	     OBGameInstance = getPtr(OBWorld + OFFSET_WorldToNetDriver);
	     OBPlayerController = getPtr(OBGameInstance + OFFSET_PController);
	     OBPlayerCarry = getPtr(OBPlayerController + OFFSET_PersistentLevel);
	     MyOB = getPtr(OBPlayerCarry + OFFSET_BasedMovementInfo_BasedMovement);	 
         UWorld *GWorld = *(UWorld **) (GWorld_Offset);
		 
            if (GWorld) {
                UNetDriver *NetDriver = GWorld->NetDriver;
				
                if (NetDriver) {
                    UNetConnection *ServerConnection = NetDriver->ServerConnection;
                    if (ServerConnection) {
                        localPlayerController = (ASTExtraPlayerController *) ServerConnection->PlayerController;
                    }
                }

                if (localPlayerController) {
                    ULevel *PersistentLevel = GWorld->PersistentLevel;
                    if (PersistentLevel) {
                        Actors = *(TArray<AActor *> *)((uintptr_t)PersistentLevel + 0x70);

                        for (int i = 0; i < Actors.Num(); i++) {
                            if (Actors[i] && Actors[i]->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                                auto Player = (ASTExtraPlayerCharacter *) Actors[i];
                                if (Player->PlayerKey == ((ASTExtraPlayerController *) localPlayerController)->PlayerKey) {
                                    localPlayer = Player;
                                    break;
                                }
                            }
                        }
                    }
                }
            }

            g_LocalPlayer = localPlayer;
            g_LocalController = localPlayerController;
            if ((g_LocalPlayer && g_LocalPlayer->RootComponent) && g_LocalController) {
                if (Config["ENABLE::AIM"]) {
                    static bool bAimBulletPatch = false;
                    bool bAimBulletOK = false;  
					static bool bAimBulletPatch2 = false;
                    bool bAimBulletOK2 = false;    
				        UCharacterWeaponManagerComponent *WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        ASTExtraShootWeapon *CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            UShootWeaponEntity *ShootWeaponEntityComponent = CurrentWeaponReplicated->ShootWeaponEntityComp;
            
				           if (Config["SET::WEAPON"]) {
                                  ShootWeaponEntityComponent->AccessoriesVRecoilFactor = (float) Config["SET::RECOIL"];
	                              ShootWeaponEntityComponent->AccessoriesHRecoilFactor = (float) Config["SET::RECOIL"];
							      ShootWeaponEntityComponent->AccessoriesRecoveryFactor = (float) Config["SET::RECOIL"];
							      ShootWeaponEntityComponent->ShotGunCenterPerc = 0;                                       
	                              ShootWeaponEntityComponent->ShotGunVerticalSpread = 0;                                    
	                              ShootWeaponEntityComponent->ShotGunHorizontalSpread = 0;      
								  ShootWeaponEntityComponent->RecoilKickADS = 0;    
								  ShootWeaponEntityComponent->TraceDistance = 0;
	                              ShootWeaponEntityComponent->bHasAutoFireMode = 1;
						    }
								 
						   if (Config["SET::WEAPON"]) {
							      ShootWeaponEntityComponent->CrossHairBurstSpeed = 9999.9f;
			                      ShootWeaponEntityComponent->CrossHairInitialSize = (float) Config["SET::CROSSHAIR"];
							      ShootWeaponEntityComponent->CrossHairBurstIncreaseSpeed = 9999.9f;		
							      ShootWeaponEntityComponent->GameDeviationFactor = (float) 0; 
								  ShootWeaponEntityComponent->GameDeviationAccuracy = (float) 0;
								  ShootWeaponEntityComponent->AccessoriesDeviationFactor = (float) 0;
						   }
						   
					       if (Config["SET::WEAPON2"]) {
						          ShootWeaponEntityComponent->BaseImpactDamage = 0;
								  ShootWeaponEntityComponent->WeaponAimFOV = 0;
							      ShootWeaponEntityComponent->MaxDamageRate = 0;
							      ShootWeaponEntityComponent->DamageImpulse = 0;
	     					      ShootWeaponEntityComponent->ExtraHitPerformScale = 0;
							      ShootWeaponEntityComponent->MaxVelocityOffsetAddRate = 0;
								  ShootWeaponEntityComponent->BulletRange = 0;
								  ShootWeaponEntityComponent->BurstShootInterval = 0;
							      ShootWeaponEntityComponent->BurstShootCD = 0;							 
							      ShootWeaponEntityComponent->WeaponBodyLength = 0;							
								  ShootWeaponEntityComponent->MaxBulletImpactFXClampDistance = 0;
					        }
                            if (ShootWeaponEntityComponent) {							
                                bool bReady = Config["AIMBOT::TRIGGER"] == 0;
                                if (Config["AIMBOT::TRIGGER"] == 1) {
                                    bReady = g_LocalPlayer->bIsWeaponFiring;
                                }
                                if (Config["AIMBOT::TRIGGER"] == 2) {
                                    bReady = g_LocalPlayer->bIsGunADS;
                                }
                                if (Config["AIMBOT::TRIGGER"] == 3) {
                                    bReady = (g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS);
                                }
                                if (Config["AIMBOT::TRIGGER"] == 4) {
                                    bReady = (g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS);
                                }
								
							
                                if (bReady) {
                                    ASTExtraPlayerCharacter *Target = 0;
                                    if (Config["AIMBOT::TARGET"] == 0) {
                                        Target = GetTargetByDistance();
                                    }
                                    if (Config["AIMBOT::TARGET"] == 1) {
                                        Target = GetTargetByCrosshairDistance();
                                    }
                     
                                if (Target && Target->RootComponent) {
                                    FVector targetAimPos = GetBoneLocation(Target, 6);
                                    if (Config["AIM::LOCATION"] == 1) {
                                        targetAimPos = GetBoneLocation(Target, 6);
                                        targetAimPos.Z -= 25.f;
                                    }
										
								if (Config["AIM::360"]) {     
                                  auto STPlayerController = getPtr(MyOB + 0x25dc);
                                if(STPlayerController)  {
						             auto PlayerCameraManager = getPtr(STPlayerController + 0x340);
                        if (PlayerCameraManager) {                       
                                    FCameraCacheEntry CameraCache = Read2<FCameraCacheEntry>(PlayerCameraManager + 0x350);					
                                    FVector currentViewAngle = CameraCache.POV.Location;
                          
                                    FRotator aimRotation = ToRotator(currentViewAngle, targetAimPos);
                                    CameraCache.POV.Rotation = aimRotation;				
								  Write2<FCameraCacheEntry>(PlayerCameraManager + 0x350, CameraCache);
                                       }
                                    }
								  }						
							    if (Config["AIM::OPTION"] == 2) {     
                                       auto STPlayerController = getPtr(MyOB + 0x275c);
                                if(STPlayerController)  {
						               auto PlayerCameraManager = getPtr(STPlayerController + 0x340);
                                if (PlayerCameraManager) {                       
                                       FCameraCacheEntry CameraCache = Read2<FCameraCacheEntry>(PlayerCameraManager + 0x350);					
                                       FVector currentViewAngle = CameraCache.POV.Location;
                                                             
									   FRotator aimRotation = ToRotator(currentViewAngle, targetAimPos);
                                       CameraCache.POV.Rotation = aimRotation;				
									   Write2<FCameraCacheEntry>(PlayerCameraManager + 0x350, CameraCache);
                                        }
                                     }
								  }				  			    		
                                        if (Config["AIMBOT::PREDICTION"]) {
                                            ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                        if (CurrentVehicle) {
                                            FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                                            float dist = g_LocalPlayer->GetDistanceTo(Target);
											//MAKE CRASH
                                            auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                                            targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                                        } else {
                                            auto STCharacterMovement = Target->STCharacterMovement;
                                            if (STCharacterMovement) {
                                                FVector Velocity = STCharacterMovement->Velocity;

                                                float dist = g_LocalPlayer->GetDistanceTo(Target);
                                                auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                                                targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                                            }
                                        }
                                    }				
										
                              if (Config["AIM::OPTION"] == 0) {
                                   FRotator m_Rotation = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location));
                                   FVector localPos = GetBoneLocation(g_LocalPlayer, 6);
                                   auto aimRotation = ToRotator(localPos, targetAimPos);
								   
                              
                              if (Config["AIMBOT::SMOOTH"]) {
								  //NEED TO SMALL FIXED
                                   aimRotation.Pitch -= m_Rotation.Pitch;
                                   aimRotation.Yaw -= m_Rotation.Yaw;
 
                                   ClampAngles(aimRotation);
 
                                   m_Rotation.Pitch += aimRotation.Pitch / (float) Config["AIMBOT::SMOOTHNESS"];
                                   m_Rotation.Yaw += aimRotation.Yaw / (float) Config["AIMBOT::SMOOTHNESS"];
                                } else {
                                   ClampAngles(aimRotation);
                                   m_Rotation.Pitch = aimRotation.Pitch;
                                   m_Rotation.Yaw = aimRotation.Yaw;
                                 }
								 g_LocalController->ControlRotation = m_Rotation;	  
                              }
							 
							 
							  			  					
								  
							  if (Config["AIM::OPTION"] == 1) {
                                 if (origCode_AimBullet[0] == 0x00) {
                                     Tools::Read((void *) (AimBullet_Offset), origCode_AimBullet, sizeof(origCode_AimBullet));					                            
									}						  
                              if (*(uint8_t *) (AimBullet_Offset) == 0xF0) {
                                 if (Tools::Write((void *) (AimBullet_Offset), shellCode_AimBullet, sizeof(shellCode_AimBullet))) {
                                     bAimBulletPatch = true;
                                  }
                              }

                              if (bAimBulletPatch) {
                                  if (Tools::Write((void *) (AimBullet_Offset + 0x1C), &targetAimPos, sizeof(FVector))) {
                                      bAimBulletOK = true;       
									       
							    	}
                                 }
                                   
                    if (origCode_AimBullet[-10] != 0x00) {
                        if (bAimBulletPatch && !bAimBulletOK) {
                            Tools::Write((void *) (AimBullet_Offset), origCode_AimBullet, sizeof(origCode_AimBullet));
                            bAimBulletPatch = false;
                          }
                       }
                   }
		        
                       if (Config["AIM::OPTION"] == 2) {
                                 if (origCode_AimBullet[0] == 0x00) {
                                     Tools::Read((void *) (AimBullet_Offset), origCode_AimBullet, sizeof(origCode_AimBullet));					 
                                   }
                              if (*(uint8_t *) (AimBullet_Offset) == 0xF0) {
                                 if (Tools::Write((void *) (AimBullet_Offset), shellCode_AimBullet, sizeof(shellCode_AimBullet))) {
                                     bAimBulletPatch2 = true;
                                  }
                              }

                              if (bAimBulletPatch2) {
                                  if (Tools::Write((void *) (AimBullet_Offset + 0x1C), &targetAimPos, sizeof(FVector))) {
                                      bAimBulletOK2 = true;       
									       
							    	     }
                                     }
                                 }
                             }
					    }
				    }
			    }
		    }
                     
                    if (origCode_AimBullet[-10] != 0x00) {
                        if (bAimBulletPatch2 && !bAimBulletOK2) {
                            Tools::Write((void *) (AimBullet_Offset), origCode_AimBullet, sizeof(origCode_AimBullet));
                            bAimBulletPatch2 = false;
                        }
                    }
                }
            } 
		
            g_LocalPlayer = localPlayer;
            g_LocalController = localPlayerController;
            g_Actors = Actors;
		}
		
        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
    }
    return 0;
}

// ================================================================================================================================ //

void *Init_Thread(void *) {
     while (!g_UE4) {
        g_UE4 = Tools::GetBaseAddress("libUE4.so");
        sleep(1);
    }

    LOGI("libUE4.so: %p", g_UE4);

    GWorld_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 00 60 8F E0 ?? ?? ?? E5 04 00 80 E0");
    if (GWorld_Offset) {
        GWorld_Offset += *(uintptr_t * )((GWorld_Offset + *(uint8_t * )(GWorld_Offset) + 0x8)) + 0x18;
        LOGI("GWorld_Offset: %p", GWorld_Offset - g_UE4);
    } else {
        LOGI("Failed to search GWorld pattern!");
    }

    GUObjectArray_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 1F 01 C2 E7 04 00 84 E5 00 20 A0 E3");
    if (GUObjectArray_Offset) {
        GUObjectArray_Offset += *(uintptr_t * )((GUObjectArray_Offset + *(uint8_t * )(GUObjectArray_Offset) + 0x8)) + 0x18;
        LOGI("GUObjectArray_Offset: %p", GUObjectArray_Offset - g_UE4);
    } else {
        LOGI("Failed to search GUObjectArray pattern!");
    }

    GNames_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 00 00 8F E0 ?? ?? ?? E5 04 00 A0 E1 10 8C BD E8");
    if (GNames_Offset) {
        GNames_Offset += *(uintptr_t * )((GNames_Offset + *(uint8_t * )(GNames_Offset) + 0x8)) + 0x10;
        LOGI("GNames_Offset: %p", GNames_Offset - g_UE4);
    } else {
        LOGI("Failed to search GNames pattern!");
    }

    CanvasMap_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 24 10 4B E2 18 40 0B E5 00 20 A0 E3");
    if (CanvasMap_Offset) {
        CanvasMap_Offset += *(uintptr_t * )((CanvasMap_Offset + *(uint8_t * )(CanvasMap_Offset) + 0x8)) + 0x1C;
        LOGI("CanvasMap_Offset: %p", CanvasMap_Offset - g_UE4);
    } else {
        LOGI("Failed to search CanvasMap pattern!");
    }

    AimBullet_Offset = Tools::FindPattern("libUE4.so", "F0 4F 2D E9 1C B0 8D E2 04 D0 4D E2 06 8B 2D ED D0 D0 4D E2 0C 70 8B E2 44 C0 4B E2 01 50 A0 E1 00 40 A0 E1 83 00 97 E8 08 60 9B E5 4C 00 8C E8 50 20 4B E2 83 00 82 E8 ?? ?? 95 E5");
    LOGI("AimBullet_Offset: %p", AimBullet_Offset - g_UE4);

    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    if (mprotect((void *) ((uintptr_t) AimBullet_Offset - ((uintptr_t) AimBullet_Offset % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) != 0) {
        LOGI("mprotect failed! Feature may not be working!");
    } else {
        LOGI("mprotect succeeded!");
    }

    FName::GNames = *(TNameEntryArray **) (GNames_Offset);
    UObject::GUObjectArray = (FUObjectArray *) (GUObjectArray_Offset);

    bScanPatternCompleted = true;

    pthread_t t;
    pthread_create(&t, 0, Memory_Thread, 0);

    return 0;
}

void native_Init(JNIEnv *env, jclass clazz, jobject mContext) {
    pthread_t t;
    pthread_create(&t, 0, Init_Thread, 0);
}



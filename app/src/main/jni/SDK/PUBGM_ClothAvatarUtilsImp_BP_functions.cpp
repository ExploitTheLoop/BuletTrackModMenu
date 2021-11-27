// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ClothAvatarUtilsImp_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClothAvatarUtilsImp_BP.ClothAvatarUtilsImp_BP_C.GetDefaultReplaceMeshPack
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackpackAvatarHandle**  InAvatarHandle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshPackage            OutMeshPack                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UClothAvatarUtilsImp_BP_C::GetDefaultReplaceMeshPack(class UBackpackAvatarHandle** InAvatarHandle, struct FMeshPackage* OutMeshPack)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ClothAvatarUtilsImp_BP.ClothAvatarUtilsImp_BP_C.GetDefaultReplaceMeshPack");

	UClothAvatarUtilsImp_BP_C_GetDefaultReplaceMeshPack_Params params;
	params.InAvatarHandle = InAvatarHandle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutMeshPack != nullptr)
		*OutMeshPack = params.OutMeshPack;

	return params.ReturnValue;
}

}


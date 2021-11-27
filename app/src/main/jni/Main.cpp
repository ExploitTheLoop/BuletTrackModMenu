#include "Includes.h"
#include "PUBGM.h"

#include <Includes/Utils.h>
#if defined(__aarch64__)
#include <Substrate/And64InlineHook.hpp>
#else
#include <Substrate/SubstrateHook.h>
#include <Substrate/CydiaSubstrate.h>
#endif
#include "KittyMemory/MemoryPatch.h"
#include "Includes/Logger.h"
struct Patch {
    MemoryPatch HIGHView,flash,flashh,flash1,flash2,flash3,CarJump,Bypass,Bypass1,Bypass2,Bypass3,Bypass4,Bypass5,Bypass6,Bypass7,Bypass8,Bypass9,Bypass10,Bypass11,Bypass12,Bypass13,Bypass14,Bypass15,Bypass16,Bypass17,Bypass18,Bypass19,Bypass20,Bypass21,Bypass22,Bypass23,Bypass24,Bypass25,Bypass26,Bypass27,Bypass28,Bypass29,Bypass30,Bypass31,Bypass32,Bypass33,Bypass34,Bypass35,Bypass36,Bypass37,Bypass38,Bypass39,Bypass40,Bypass41,Bypass42,Bypass43,Bypass44,Bypass45,Bypass46,Bypass47,Bypass48,Bypass49,Bypass50,Bypass51,Bypass52,Bypass53,Bypass54,Bypass55,Bypass56,Bypass57,Bypass58,Bypass59,Bypass60,Bypass61,Bypass62,Bypass63,Bypass64,Bypass65,Bypass66,Bypass67,Bypass68,Bypass69,Bypass70,Bypass71,Bypass72,Bypass73,Bypass74,Bypass75,Bypass76,Bypass77,Bypass78,Bypass79,Bypass80,Bypass81,Bypass82,Bypass83,Bypass84,Bypass85,Bypass86,Bypass87,Bypass88,Bypass89,Bypass90,Bypass91,Bypass92,Bypass93,Bypass94,Bypass95,Bypass96,Bypass97,Bypass98,Bypass99,Bypass100,Bypass101,Bypass102,Bypass103,Bypass104,Bypass105,Bypass106,Bypass107,Bypass108,Bypass109,Bypass110,Bypass111,Bypass112,Bypass113,Bypass114,Bypass115,Bypass116,Bypass117,Bypass118,Bypass119,Bypass120,Bypass121,Bypass122,Bypass123,Bypass124,Bypass125,Bypass126,Bypass127,Bypass128,Bypass129,Bypass130,Bypass131,Bypass132,Bypass133,Bypass134,Bypass135,Bypass136,Bypass137,Bypass138,Bypass139,Bypass140,Bypass141,Bypass142,Bypass143,Bypass144,Bypass145,Bypass146,Bypass147,Bypass148,Bypass149,Bypass150,Bypass151,Bypass152,Bypass153,Bypass154,Bypass155,Bypass156,Bypass175,Bypass176,Bypass178,Bypass179,Bypass180,Bypass181,Bypass182,Bypass183,Bypass184,Bypass185,Bypass186,Bypass187,Bypass188,Bypass189,Bypass190,Bypass191,Bypass192,Bypass193,Bypass194,Bypass195,Bypass196,Bypass197,Bypass198,Bypass199,Bypass200,Bypass201,Bypass202,Bypass203,Bypass204,Bypass205,Bypass206,Bypass207,Bypass208,Bypass209,Bypass210,Bypass211,Bypass212,Bypass213,Bypass214,Bypass215,Bypass216,Bypass217,Bypass218,Bypass219,Bypass220,Bypass221,Bypass222,Bypass223,Bypass224,Bypass225,Bypass226,Bypass227,Bypass228,Bypass229,Bypass230,Bypass231,Bypass232,Bypass233,Bypass234,Bypass235,Bypass236,Bypass237,Bypass238,Bypass239,Bypass240,Bypass241,Bypass242,Bypass243,Bypass244,Bypass245,Bypass246,Bypass247,Bypass248,Bypass249,Bypass250,Bypass251,Bypass252,Bypass253,Bypass254,Bypass255,Bypass256,Bypass257,Bypass258,Bypass259,Bypass260,Bypass261,Bypass262,Bypass263,Bypass264,Bypass265,Bypass266,Bypass267,Bypass268,Bypass269,Bypass270,Bypass271,Bypass272,Bypass273,Bypass274,Bypass275,Bypass276,Bypass277,Bypass278,Bypass279,Bypass280,Bypass281,Bypass282,Bypass283,Bypass284,Bypass285,Bypass286,Bypass287,Bypass288,Bypass289,Bypass290,Bypass291,Bypass292,Bypass293,Bypass294,Bypass295,Bypass296,Bypass297,Bypass298,Bypass299,Bypass300,Bypass301,Bypass302,Bypass303,Bypass304,Bypass305,Bypass306,Bypass307,Bypass308,Bypass309,Bypass310,Bypass311,Bypass312,Bypass313,Bypass314,Bypass315,Bypass316,Bypass317,Bypass318,Bypass319,Bypass320,Bypass321,Bypass322,Less,Less2,Less3,Less4,Less5,Small,Small2,Small3,Instant,Instant2;
} Patches;
bool isbypass = false,isLess = false,HIGHView = false,CarJump = false,flash = false,flash2 = false,flash3 = false,featureHookToggle = false;
void native_onSendConfig(JNIEnv *env, jobject thiz, jstring s, jstring v) {
    const char *config = env->GetStringUTFChars(s, 0);
    const char *value = env->GetStringUTFChars(v, 0);

    if (!strcmp(config, "CMD_PARSE_ITEMS")) {
        itemData = json::parse(value);
    } else if (!strcmp(config, "ESP::ITEMS")) {
        u_long itemId = strtoul(value, 0, 0);
        itemConfig[itemId] = !itemConfig[itemId];
    } else {
        Config[config] = (u_long) strtoul(value, 0, 0);
    }
}

jclass (*orig_FindClass)(JNIEnv *env, const char *name);

int Register2(JNIEnv *env) {
    JNINativeMethod methods[] = {{"Init",  "(Landroid/content/Context;)V",                   (void *) native_Init}};

    jclass clazz = env->FindClass("com/pubgm/Launcher");
    if (!clazz)
        return -1;

    if (env->RegisterNatives(clazz, methods, sizeof(methods) / sizeof(methods[0])) != 0)
        return -1;

    return 0;
}

jclass hkFindClass(JNIEnv *env, const char *name) {
    if (!strcmp(name, "arm/ArmKill") ||
            !strcmp(name, "com/pubgm/Floating") ||
            !strcmp(name, "com/pubgm/Launcher") ||
            !strcmp(name, "com/pubgm/MainActivity")) {
        LOGI("FindClass: %s", name);
        return 0;
    }
    return orig_FindClass(env, name);
}



void native_onSwitch(JNIEnv*, jclass clazz, int code, jboolean jboolean1)
{
    switch ((int) code) {
        case 1:
            isbypass = jboolean1;
            if (isbypass) {
                Patches.Bypass1.Modify();
                Patches.Bypass2.Modify();
                Patches.Bypass3.Modify();
                Patches.Bypass4.Modify();
                Patches.Bypass5.Modify();
                Patches.Bypass6.Modify();

            } else {
                Patches.Bypass1.Restore();
                Patches.Bypass2.Restore();
                Patches.Bypass3.Restore();
                Patches.Bypass4.Restore();
                Patches.Bypass5.Restore();
                Patches.Bypass6.Restore();

            }
            break;
        case 2:
            isLess = jboolean1;
            if(isLess){
                Patches.Less.Modify();

            }else{
                Patches.Less.Restore();

            }
            break;
        case 3:
            HIGHView = jboolean1;
            if (HIGHView) {
                Patches.HIGHView.Modify();
            } else {
                Patches.HIGHView.Restore();
            }
            break;
        case 4:
            flash = jboolean1;
            if (flash) {
                Patches.flash.Modify();
                Patches.flashh.Modify();
            } else {
                Patches.flash.Restore();
                Patches.flashh.Restore();
            }
            break;
        case 5:
            flash2 = jboolean1;
            if (flash2) {
                Patches.flash1.Modify();
                Patches.flash2.Modify();
            } else {
                Patches.flash1.Restore();
                Patches.flash2.Restore();
            }
            break;

        case 6:
            flash3 = jboolean1;
            if (flash3) {
                Patches.flash3.Modify();
                Patches.flash2.Restore();
            } else {
                Patches.flash3.Restore();
                Patches.flash2.Restore();
            }
            break;
        case 7:
            CarJump = jboolean1;
            if (CarJump) {
                Patches.CarJump.Modify();
            } else {
                Patches.CarJump.Restore();
            }
            break;
    }

}
int Register1(JNIEnv *env) {
    JNINativeMethod methods[] = {{"onSendConfig", "(Ljava/lang/String;Ljava/lang/String;)V", (void *) native_onSendConfig},
                                 {"onCanvasDraw", "(Landroid/graphics/Canvas;IIF)V",         (void *) native_onCanvasDraw},
                                 {"Switch", "(IZ)V", (void *) native_onSwitch}};


    jclass clazz = env->FindClass("com/pubgm/Floating");
    if (!clazz)
        return -1;

    if (env->RegisterNatives(clazz, methods, sizeof(methods) / sizeof(methods[0])) != 0)
        return -1;

    return 0;
}

void *hack_thread(void *) {

    ProcMap libtersafe;
    do {
        libtersafe = KittyMemory::getLibraryMap("libtersafe.so");
        sleep(1);
    } while (!libtersafe.isValid());
    sleep(1);

    Patches.Bypass1 = MemoryPatch::createWithHex("libUE4.so", 0x6CDAC, "00 00 00 00");
    Patches.Bypass2 = MemoryPatch::createWithHex("libUE4.so", 0xEE29C, "00 00 00 00");
    Patches.Bypass3 = MemoryPatch::createWithHex("libUE4.so", 0xEE524, "00 00 00 00");
    Patches.Bypass4 = MemoryPatch::createWithHex("libUE4.so", 0xEEA88, "00 00 00 00");
    Patches.Bypass5 = MemoryPatch::createWithHex("libUE4.so", 0xEF3F4, "00 00 00 00");
    Patches.Bypass6 = MemoryPatch::createWithHex("libUE4.so", 0x3D9954, "00 00 00 00");

    Patches.Less = MemoryPatch::createWithHex("libUE4.so", 0x14CB778, "00 00 00 00");
    Patches.flash = MemoryPatch::createWithHex("libUE4.so", 0x422A554, "33 33 0B 41");
    Patches.flash2 = MemoryPatch::createWithHex("libUE4.so", 0x1449B34, "00 00 00 00");
    Patches.HIGHView = MemoryPatch::createWithHex("libUE4.so", 0x3BAFD30, "00 00 8C 43");
   /* Patches.Aim3601 = MemoryPatch::createWithHex("libUE4.so", 0x110B750, "01 00 00 EA");
    Patches.Aim3602 = MemoryPatch::createWithHex("libUE4.so", 0x2DD2370, "01 00 00 EA");
    Patches.Aim3603 = MemoryPatch::createWithHex("libUE4.so", 0x110C9B0, "01 00 00 7A");
    Patches.Aim3604 = MemoryPatch::createWithHex("libUE4.so", 0x154FE70, "01 00 00 7A");
    Patches.Aim3605 = MemoryPatch::createWithHex("libUE4.so", 0x1E2923C, "01 00 00 7A");
    Patches.Aim3606 = MemoryPatch::createWithHex("libUE4.so", 0x2873B30, "01 00 00 7A");
    Patches.Aim3607 = MemoryPatch::createWithHex("libUE4.so", 0x3848100, "01 00 00 7A");
    Patches.Aim3608 = MemoryPatch::createWithHex("libUE4.so", 0x3AFA098, "01 00 00 7A");
    Patches.Aim3609 = MemoryPatch::createWithHex("libUE4.so", 0x3B0D138, "01 00 00 7A");
    Patches.Aim36010 = MemoryPatch::createWithHex("libUE4.so", 0x519A170, "01 00 00 7A");
    Patches.Aim36011 = MemoryPatch::createWithHex("libUE4.so", 0x110B750, "01 00 00 EA");
    Patches.Aim36012 = MemoryPatch::createWithHex("libUE4.so", 0x10AE690, "41 0A 00 EE");
    Patches.Aim36013 = MemoryPatch::createWithHex("libUE4.so", 0x110A214, "01 00 A0 E3");*/




    Patches.CarJump = MemoryPatch::createWithHex("libUE4.so",0x4AADD70, "00 00 00 00", 4);

    return NULL;
}
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env;
    vm->GetEnv((void **) &env, JNI_VERSION_1_6);

    if (Register1(env) != 0)
        return -1;

    if (Register2(env) != 0)
        return -1;
    pthread_t ptid;
    pthread_create(&ptid, NULL, hack_thread, NULL);
    Tools::Hook((void *) env->functions->FindClass, (void *) hkFindClass, (void **) &orig_FindClass);

    return JNI_VERSION_1_6;
}

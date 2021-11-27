LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := libcurl
LOCAL_SRC_FILES := $(LOCAL_PATH)/external/curl-android-$(TARGET_ARCH_ABI)/lib/libcurl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libssl
LOCAL_SRC_FILES := $(LOCAL_PATH)/external/openssl-android-$(TARGET_ARCH_ABI)/lib/libssl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libcrypto
LOCAL_SRC_FILES := $(LOCAL_PATH)/external/openssl-android-$(TARGET_ARCH_ABI)/lib/libcrypto.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE            := codexlayer


LOCAL_SRC_FILES 		:= Main.cpp \
                              Tools.cpp \
                              fake_dlfcn.cpp \
                              Log.cpp \
                              Engine\Paint.cpp \
                              Engine\Canvas.cpp \
                              Engine\Rect.cpp \
                              Engine\Typeface.cpp \
                              Engine\Path.cpp \
                              base64\base64.cpp \
                              Substrate\hde64.c \
                              Substrate\SubstrateDebug.cpp \
                              Substrate\SubstrateHook.cpp \
                              Substrate\SubstratePosixMemory.cpp \
                              Substrate\And64InlineHook.cpp \
                              SDK\PUBGM_Basic.cpp \
                              SDK\PUBGM_Basic_functions.cpp \
                              SDK\PUBGM_CoreUObject_functions.cpp \
                              SDK\PUBGM_Engine_functions.cpp \
                              SDK\PUBGM_ShadowTrackerExtra_functions.cpp \
                              SDK\PUBGM_Client_functions.cpp \
                              SDK\PUBGM_UMG_functions.cpp \
                              SDK\PUBGM_Gameplay_functions.cpp\
                              KittyMemory/KittyMemory.cpp \
                               KittyMemory/MemoryPatch.cpp \
                                  KittyMemory/MemoryBackup.cpp \
                                  KittyMemory/KittyUtils.cpp

FILE_LIST := $(wildcard $(LOCAL_PATH)/libzip/*.c)
LOCAL_SRC_FILES += $(FILE_LIST:$(LOCAL_PATH)/%=%)

LOCAL_C_INCLUDES := $(LOCAL_PATH)/external/curl-android-$(TARGET_ARCH_ABI)/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/external/openssl-android-$(TARGET_ARCH_ABI)/include

LOCAL_CPP_FEATURES                      := exceptions
LOCAL_LDLIBS                            := -llog -landroid -lz
LOCAL_STATIC_LIBRARIES					:= libcurl libssl libcrypto

include $(BUILD_SHARED_LIBRARY)
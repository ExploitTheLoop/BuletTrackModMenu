include $(CLEAR_VARS)

APP_OPTIM               := debug
APP_PLATFORM            := android-21
APP_STL                 := c++_static
APP_ABI                 := armeabi-v7a

APP_UPX                 := false

APP_CFLAGS              := -O2 -s -ffunction-sections -fdata-sections -fno-stack-protector
APP_LDFLAGS             := -Wl,--exclude-libs,ALL
APP_LDFLAGS             := -Wl,-version-script -Wl,$(call my-dir)\symbols.ver

include $(BUILD_SHARED_LIBRARY)

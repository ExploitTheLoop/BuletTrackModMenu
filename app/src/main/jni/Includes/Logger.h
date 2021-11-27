//
//  Logger.h
//
#pragma once


#include <jni.h>
#include <android/log.h>

enum LogType {
    eDEBUG = 3,
    eINFO  = 4,
    eWARN  = 5,
    eERROR = 6,
};

#define __LOG_TAG__ "TheMoodRISER-Log"

#define __DEBUG_BUILD__

#ifdef __DEBUG_BUILD__
#define LOGD(...) ((void)__android_log_print(eDEBUG, __LOG_TAG__, __VA_ARGS__))
#else
#define LOGD(...)
#endif

#define LOGE(...) ((void)__android_log_print(eERROR, __LOG_TAG__, __VA_ARGS__))
#define LOGI(...) ((void)__android_log_print(eINFO,  __LOG_TAG__, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(eWARN,  __LOG_TAG__, __VA_ARGS__))

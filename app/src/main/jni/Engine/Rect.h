//
// Created by aimar on 1/13/2020.
//

#ifndef RECT_H
#define RECT_H

#include <jni.h>

#include "Const.h"

class Rect2 {
public:
    float x;
    float y;
    float width;
    float height;

    Rect2() {
        this->x = 0;
        this->y = 0;
        this->width = 0;
        this->height = 0;
    }

    Rect2(float x, float y, float width, float height) {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
    }

    bool operator==(const Rect2 &src) const {
        return (src.x == this->x && src.y == this->y && src.height == this->height &&
                src.width == this->width);
    }

    bool operator!=(const Rect2 &src) const {
        return (src.x != this->x && src.y != this->y && src.height != this->height &&
                src.width != this->width);
    }
};
  
class Rect {
public:
    JNIEnv *env;
    jobject rectObj;

    jfieldID leftId, topId, rightId, bottomId;

    Rect(JNIEnv *env) {
        this->env = env;

        jclass rectClass = env->FindClass("android/graphics/Rect");
        jmethodID init = env->GetMethodID(rectClass, "<init>", "()V");
        this->rectObj = env->NewGlobalRef(env->NewObject(rectClass, init));

        leftId = env->GetFieldID(rectClass, "left", "I");
        topId = env->GetFieldID(rectClass, "top", "I");
        rightId = env->GetFieldID(rectClass, "right", "I");
        bottomId = env->GetFieldID(rectClass, "bottom", "I");

        env->DeleteLocalRef(rectClass);
    }

    int getLeft();
    int getRight();
    int getTop();
    int getBottom();
    int getWidth();
    int getHeight();
};


#endif //MENU_RECT_H

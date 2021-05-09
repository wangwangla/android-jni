//
// Created by 28188 on 2021/5/9.
//

#ifndef NDKDEMO_NATIVE_H
#define NDKDEMO_NATIVE_H
#include <jni.h>
#include <string>
extern "C"
JNIEXPORT jstring JNICALL
Java_com_kangwang_javacallc_Demo01_stringFromJNI(JNIEnv *env, jobject thiz);

#endif //NDKDEMO_NATIVE_H

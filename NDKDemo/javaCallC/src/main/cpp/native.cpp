#include "native.h"

extern "C" jstring Java_com_kangwang_javacallc_Demo01_stringFromJNI(JNIEnv *env, jobject thiz) {
    // TODO: implement stringFromJNI()
    std::string hello = "Hel";
    return env->NewStringUTF(hello.c_str());
}
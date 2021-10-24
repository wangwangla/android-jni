
#include <cstring>
#include <jni.h>
#include <cinttypes>
#include <gmath.h>
#include <gperf.h>
#include <string>
#include <android/log.h>
#define LOGI(...) \
  ((void)__android_log_print(ANDROID_LOG_INFO, "hello-libs::", __VA_ARGS__))

extern "C" JNIEXPORT jstring JNICALL
Java_kw_test_demo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject thiz) {
    std::string hello = "Hello from C++";

//
//    auto ticks = GetTicks();
//
//    for (auto exp = 0; exp < 32; ++exp) {
//        volatile unsigned val = gpower(exp);
//        (void) val;  // to silence compiler warning
//    }
//    ticks = GetTicks() - ticks;

//    LOGI("calculation time: %" PRIu64, ticks);



    return env->NewStringUTF(hello.c_str());
}

#include <jni.h>

//
// Created by 28188 on 2021/10/30.
//
#include <OMXAL/OpenMAXAL.h>
#include <OMXAL/OpenMAXAL_Android.h>
#include "android_fopen.h"
#include <android/asset_manager_jni.h>

XAObjectItf engineObject;
XAEngineItf engineEngine;
static XAObjectItf outputMixObject = NULL;
#define NB_BUFFERS 8

extern "C"
JNIEXPORT void JNICALL
Java_kw_test_demo_MainActivity_createEngine(JNIEnv *env, jobject thiz) {

    XAresult res;
    //create engine
    const XAObjectItf *cc = &engineObject;
    res = xaCreateEngine(&engineObject,0,NULL,0,NULL,NULL);
    res = (*engineObject)->Realize(engineObject, XA_BOOLEAN_FALSE);
    (*engineObject)->GetInterface(engineObject,XA_IID_ENGINE,&engineEngine);
    (*outputMixObject)->Realize(outputMixObject,XA_BOOLEAN_FALSE);

}

jobject android_java_asset_manager = NULL;

// video sink for the player
static ANativeWindow* theNativeWindow;
extern "C"
JNIEXPORT jboolean JNICALL
Java_kw_test_demo_MainActivity_createStreamingMediaPlayer(JNIEnv *env, jclass clazz,
                                                          jobject asset_manager, jstring filename) {
    XAresult res;
    android_java_asset_manager = env->NewGlobalRef(asset_manager);
    android_fopen_set_asset_manager(AAssetManager_fromJava(env,android_java_asset_manager));
    const char *filN = env->GetStringUTFChars(filename,NULL);
    //打开
    XADataLocator_AndroidBufferQueue locatorAndroidBufferQueue = {
            XA_DATALOCATOR_ANDROIDBUFFERQUEUE,
            NB_BUFFERS
    };
    XADataFormat_MIME formatMime = {
            XA_DATAFORMAT_MIME,
            XA_ANDROID_MIME_MP2TS,
            XA_CONTAINERTYPE_MPEG_TS
    };
    XADataSource dataSource = {&locatorAndroidBufferQueue,&formatMime};
    //配置sink
    XADataLocator_NativeDisplay loc_nd = {
            XA_DATALOCATOR_NATIVEDISPLAY,

    };
}
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_ccalljava_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_ccalljava_MainActivity_JNIPeople(JNIEnv *env, jobject thiz, jobject people) {
//    需要获取方法，老方法 ，直接使用findclass
    jclass peclass = env->GetObjectClass(people);
//    下面的一样
}
/**
 * 使用类名的方式
 */
extern "C"
JNIEXPORT void JNICALL
Java_com_example_ccalljava_MainActivity_JNIPeopleFanshe(JNIEnv *env, jobject thiz) {
//    使用c++的方式创建字符串
    std::string clazzName = "com.example.ccalljava.People";
//    字符串转换
    clazzName.c_str();
//  得到class
    jclass jscc = env->FindClass(clazzName.c_str());
//  得到构造方法
    jmethodID initMa = env->GetMethodID(jscc,"<init>","()V");
//  根据构造 方法创建对象
    jobject pInstance = env->NewObject(jscc,initMa);
//  我们得到里面的方法
    jmethodID psetName= env->GetMethodID(jscc,"setName","(Ljava/lang/String;)V");
    jmethodID psetAge= env->GetMethodID(jscc,"setAge","(I)V");
//    调用
    env->CallVoidMethod(pInstance,psetAge,1);
    std::string string = "XXX";
    env->CallVoidMethod(pInstance,psetName, string.c_str());
}

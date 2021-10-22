#include <jni.h>
#include <string>
#include <pthread.h>

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
    jmethodID setNam = env->GetMethodID(peclass,"setName", "(Ljava/lang/String;)V");
    jmethodID getNam = env->GetMethodID(peclass,"getName", "()Ljava/lang/String;");
    jmethodID setA = env->GetMethodID(peclass,"setAge", "(I)V");
    jmethodID getA = env->GetMethodID(peclass,"getAge", "()I");
    jstring xx = env->NewStringUTF("ddd");
    env->CallVoidMethod(people,setA,0);
    env->CallVoidMethod(people,setNam,xx);
    jint cc = env->CallIntMethod(people,getA);
    jobject names = env->CallObjectMethod(people,getNam);
//    jstring  nameValue = env->NewStringUTF(reinterpret_cast<const char *>(names));
//
    jmethodID inisuc = env->GetMethodID(peclass,"initSuccess", "()V");
    env->CallVoidMethod(people,inisuc);
}
/**
 * 使用类名的方式
 */
extern "C"
JNIEXPORT void JNICALL
Java_com_example_ccalljava_MainActivity_JNIPeopleFanshe(JNIEnv *env, jobject thiz) {
//    使用c++的方式创建字符串
    std::string clazzName = "com/example/ccalljava/People";
//  得到class
    jclass jscc = env->FindClass(clazzName.c_str());
//  得到构造方法
    jmethodID initMa = env->GetMethodID(jscc,"<init>","()V");
//  根据构造 方法创建对象
    jobject pInstance = env->NewObject(jscc,initMa);
////  我们得到里面的方法
    jmethodID psetName= env->GetMethodID(jscc,"setName","(Ljava/lang/String;)V");
    jmethodID psetAge= env->GetMethodID(jscc,"setAge","(I)V");
////    调用
    env->CallVoidMethod(pInstance,psetAge,1);
    jstring xx = env->NewStringUTF("ddd");
    env->CallVoidMethod(pInstance,psetName, xx);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_ccalljava_MainActivity_staticDemo(JNIEnv *env, jobject thiz) {
    jclass thizClass = env->GetObjectClass(thiz);
    jmethodID xx = env->GetStaticMethodID(thizClass,"testStatic","()V");
    env->CallStaticVoidMethod(thizClass,xx);
}

JNIEnv *encz;
JavaVM *vm1;
extern "C"
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved){
    vm1 = vm;
    //获取JNI版本
    vm->GetEnv((void**)&encz, JNI_VERSION_1_6);
    return JNI_VERSION_1_6;
}


void* threadM(void *args){
    JNIEnv *jniEnv;
    vm1->AttachCurrentThread(&jniEnv, NULL);
    //    使用c++的方式创建字符串
    //    使用c++的方式创建字符串
    std::string clazzName = "com/example/ccalljava/People";
//  得到class
    jclass jscc = jniEnv->FindClass(clazzName.c_str());
//  得到构造方法
    jmethodID initMa = jniEnv->GetMethodID(jscc,"<init>","()V");


//  根据构造 方法创建对象
//    jobject pInstance = env->NewObject(jscc,initMa);
//////  我们得到里面的方法
//    jmethodID psetName= env->GetMethodID(jscc,"setName","(Ljava/lang/String;)V");
//    jmethodID psetAge= env->GetMethodID(jscc,"setAge","(I)V");
//////    调用
//    env->CallVoidMethod(pInstance,psetAge,1);
//    jstring xx = env->NewStringUTF("ddd");
//    env->CallVoidMethod(pInstance,psetName, xx);
//    vm1->DetachCurrentThread();
    return 0;
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_ccalljava_MainActivity_threadDemo(JNIEnv *env, jobject thiz) {
    pthread_t pid;
    pthread_create(&pid, 0, threadM, 0);
}



void* three(void* args){
//    读取数据包
    jobject people = static_cast<jobject>(args);
    JNIEnv *jniEnv;

    vm1->AttachCurrentThread(&jniEnv, NULL);


    jclass jscc = jniEnv->GetObjectClass(people);
    jmethodID xx = jniEnv->GetMethodID(jscc,"setAge","(I)V");
    jniEnv->CallVoidMethod(people,xx,1);

    return 0;
}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_ccalljava_MainActivity_threadDemoInstance(JNIEnv *env, jobject thiz,
                                                           jobject people) {
//    env->GetJavaVM(&vm1);
    pthread_t  pid;
    jobject p = env->NewGlobalRef(people);
    pthread_create(&pid,0,three,p);
}
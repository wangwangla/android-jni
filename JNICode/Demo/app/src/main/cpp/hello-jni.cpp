/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#include <string.h>
#include <jni.h>

//extern “C”扩展c，使用我们这个创建的是cpp，所以是c++，c++如果有c的相关操作就需要
/**
 *JNICALL:是一个栈，它用来存储函数参数的， 在Android中没有实现
 */

/**JNIEXPORT ：Windows 中如果需要生成动态库 , 并且需要将该动态库交给其它项目使用 ,
需要在方法前加入特殊标识 , 才能 在外部 程序代码中 调用该 DLL 动态库中定义的方法 ;
 在不同平台的实现是不同的
 */
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_demo_MainActivity_showString(JNIEnv *env, jobject thiz) {
//    输出一句话
    char *str = "i am a pet！";
//    不可以直接返回str，需要转换为jstring
    return env->NewStringUTF(str);
}
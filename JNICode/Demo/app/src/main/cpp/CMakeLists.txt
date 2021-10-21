#指明cmake的版本
cmake_minimum_required(VERSION 3.4.1)

add_library(
#        最总生成的so的名字
#        SHARED   STATIC:  动态  静态库
        hello-jni
        SHARED
        hello-jni.cpp)

# Include libraries needed for hello-jni lib
# 编译链接  链接那些东西
target_link_libraries(hello-jni
                      android
                      log)


















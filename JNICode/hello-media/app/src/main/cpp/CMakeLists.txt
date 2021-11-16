cmake_minimum_required(VERSION 3.4.1)

add_library(native-media-jni
            SHARED
            android_fopen.cpp
        native_media_jni.cpp)

# Include libraries needed for native-media-jni lib
target_link_libraries(native-media-jni
                      android
                      log
                      OpenMAXAL)

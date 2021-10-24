cmake_minimum_required(VERSION 3.4.1)

set(xxxx ${CMAKE_SOURCE_DIR})

add_library(
libA STATIC IMPORTED
)
set_target_properties(
libA PROPERTIES IMPORTED_LOCATION
        ${xxxx}/gmath/lib/${ANDROID_ABI}/libgmath.a
)

add_library(lib_gperf SHARED IMPORTED)
set_target_properties(
        lib_gperf PROPERTIES IMPORTED_LOCATION
        ${xxxx}/gperf/lib/${ANDROID_ABI}/libgperf.so
)


add_library(
        native-lib
        SHARED
        native-lib.cpp)



# build application's shared lib
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")


find_library(
        log-lib
        log)
#为了可以使用里面的函数，所以这里加一个目录
target_include_directories(native-lib PRIVATE
        ${xxxx}/gmath/include
        ${xxxx}/gperf/include)
target_link_libraries(
        native-lib
        android
        lib_gperf
        libA
        ${log-lib})
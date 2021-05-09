cmake_minimum_required(VERSION 3.10.2)
project("ndkdemo")
set(libname Demo)  #编译之后的名字  不一样要和文件名相同

add_library( # Sets the name of the library.
             Demo
             # Sets the library as a shared library.
             SHARED
             # Provides a relative path to your source file(s).
             native-lib.cpp )
find_library( # Sets the name of the path variable.
              log-lib
              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )
target_link_libraries( # Specifies the target library.
                       Demo
                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )
# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.10.2)

project("main")
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)
add_library(
        native-lib
        SHARED
        native-lib.cpp)

find_library(
        log-lib

        log )


#add_library(
#        OpenCL
#        SHARED
#        IMPORTED)
#set_target_properties(OpenCL PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libOpenCL.so)
#
#add_library(
#        base
#        SHARED
#        IMPORTED)
#set_target_properties(base PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libbase.so)
#
#add_library(
#        c++
#        SHARED
#        IMPORTED)
#set_target_properties(c++ PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libc++.so)
#
#add_library(
#        c
#        SHARED
#        IMPORTED)
#set_target_properties(c PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libc.so)
#
#add_library(
#        cutils
#        SHARED
#        IMPORTED)
#set_target_properties(cutils PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libcutils.so)
#
#
#add_library(
#        dl
#        SHARED
#        IMPORTED)
#set_target_properties(dl PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libdl.so)
#
#add_library(
#        log
#        SHARED
#        IMPORTED)
#set_target_properties(log PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/liblog.so)
#
#add_library(
#        m
#        SHARED
#        IMPORTED)
#set_target_properties(m PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libm.so)
#
#add_library(
#        utils
#        SHARED
#        IMPORTED)
#set_target_properties(utils PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libutils.so)
#
#add_library(
#        processgroup
#        SHARED
#        IMPORTED)
#set_target_properties(processgroup PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libprocessgroup.so)
#
#add_library(
#        vndksupport
#        SHARED
#        IMPORTED)
#set_target_properties(vndksupport PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libvndksupport.so)
#
#add_library(
#        ld-android
#        SHARED
#        IMPORTED)
#set_target_properties(ld-android PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/ld-android.so)
#
#set_target_properties(vndksupport PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libvndksupport.so)

#add_library(
#        cgrouprc
#        SHARED
#        IMPORTED)
#set_target_properties(cgrouprc PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libcgrouprc.so)
#
#add_library(
#        dl_android
#        SHARED
#        IMPORTED)
#set_target_properties(dl_android PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libdl_android.so)

target_link_libraries(
        native-lib
#         cgrouprc
#         dl_android
#        processgroup
#        vndksupport
#        ld-android
#        utils
#        m
#        log
#        dl
#        cutils
#        c
#        c++
#        base
#        OpenCL
        openclstatic
        ${log-lib})

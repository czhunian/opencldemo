#include <jni.h>
#include <string>
//引入头文件
#include <android/log.h>
#include <android/native_window_jni.h>
#include "CL/cl.h"
#include "CL/cl_platform.h"
#include "libopencl.h"
#define LOGD(...) __android_log_print(ANDROID_LOG_INFO,"David",__VA_ARGS__)
/*全局变量*/


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_opencl_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {

    cl_int err = CL_SUCCESS;
    cl_platform_id *platforms;//查询后获得的平台列表，存放所有平台的ID
    cl_uint num_platforms;//当前可查询的平台的数量
    jint buffer;
    err = clGetPlatformIDs(0, NULL, &num_platforms);
    if (CL_SUCCESS != err)
    {
        LOGD("error1:%d", err);
        return env->NewStringUTF("error");;
    }
    platforms = new cl_platform_id[num_platforms];
    err = clGetPlatformIDs(num_platforms ,platforms ,NULL);
    buffer = num_platforms;
    LOGD("平台数:%d\n",buffer);
    LOGD("平台ID:%d\n",platforms);
    LOGD("=============================================\n");
    char buf[1024];
    for(int i = 0; i < buffer; i++) {

       err = clGetPlatformInfo(platforms[i], CL_PLATFORM_NAME, sizeof(buf), (void*)buf, NULL);
       //查询平台信息并保存在第四个参数；
       if (CL_SUCCESS != err)
       {
           LOGD("error #%d: %d", i, err);
           return env->NewStringUTF("error");;
       }
    }
    return env->NewStringUTF(buf);
}
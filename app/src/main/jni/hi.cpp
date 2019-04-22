# include <jni.h>
# include <stdio.h>

extern "C"
{

    JNIEXPORT jstring JNICALL Java_tech_wd_com_jnilx_MainActivity_fun(JNIEnv *env, jobject obj ){
       // 参数说明
       // 1. JNIEnv：代表了VM里面的环境，本地的代码可以通过该参数与Java代码进行操作
       // 2. obj：定义JNI方法的类的一个本地引用（this）
    return env -> NewStringUTF("Hello");
    // 上述代码是返回一个String类型的"Hello i am from JNI!"字符串
    }
}
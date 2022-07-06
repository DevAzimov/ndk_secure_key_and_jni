#include <jni.h>
JNIEXPORT jstring JNICALL
Java_com_magicapp_securekey_MainActivity_getPublicKey(JNIEnv *env, jobject instance) {
    return (*env)->  NewStringUTF(env, "long_public_best_key");
}
JNIEXPORT jstring JNICALL
Java_com_magicapp_securekey_MainActivity_getPrivateKey(JNIEnv *env, jobject instance) {
    return (*env)->NewStringUTF(env, "long_private_best_key");
}

JNIEXPORT jstring JNICALL
Java_com_magicapp_securekey_App_getPublicAppKey(JNIEnv *env, jobject instance) {
    return (*env)->  NewStringUTF(env, "long_public_best_api_key");
}
JNIEXPORT jstring JNICALL
Java_com_magicapp_securekey_App_getPrivateAppKey(JNIEnv *env, jobject instance) {
    return (*env)->NewStringUTF(env, "long_private_best_api_key");
}
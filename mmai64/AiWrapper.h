/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

/* Header for class org_pente_mmai_Ai */

#ifndef _Included_org_pente_mmai_Ai
#define _Included_org_pente_mmai_Ai
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     org_pente_mmai_Ai
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT jlong JNICALL Java_org_pente_mmai_Ai_init
  (JNIEnv *, jobject);
/*
 * Class:     org_pente_mmai_Ai
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_pente_mmai_Ai_privateDestroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_pente_mmai_Ai
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_pente_mmai_Ai_stop
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_pente_mmai_Ai
 * Method:    toggleCallbacks
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_pente_mmai_Ai_toggleCallbacks
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_pente_mmai_Ai
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_pente_mmai_Ai_start
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_pente_mmai_Ai
 * Method:    move
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_org_pente_mmai_Ai_move
  (JNIEnv *, jobject, jlong, jintArray, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif

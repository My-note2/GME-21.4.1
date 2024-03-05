/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_isis_gme_mgadecorator_MgaDecorator */

#ifndef _Included_org_isis_gme_mgadecorator_MgaDecorator
#define _Included_org_isis_gme_mgadecorator_MgaDecorator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_isis_gme_mgadecorator_MgaDecorator
 * Method:    createNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_mgadecorator_MgaDecorator_createNative__
  (JNIEnv *, jobject);

/*
 * Class:     org_isis_gme_mgadecorator_MgaDecorator
 * Method:    createNative
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_mgadecorator_MgaDecorator_createNative__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_isis_gme_mgadecorator_MgaDecorator
 * Method:    initialize
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_mgadecorator_MgaDecorator_initialize
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     org_isis_gme_mgadecorator_MgaDecorator
 * Method:    destroy
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_mgadecorator_MgaDecorator_destroy
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_isis_gme_mgadecorator_MgaDecorator
 * Method:    draw
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_mgadecorator_MgaDecorator_draw
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_isis_gme_mgadecorator_MgaDecorator
 * Method:    setLocation
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_mgadecorator_MgaDecorator_setLocation
  (JNIEnv *, jobject, jint, jint, jint, jint, jint);

/*
 * Class:     org_isis_gme_mgadecorator_MgaDecorator
 * Method:    getLocation
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_mgadecorator_MgaDecorator_getLocation
  (JNIEnv *, jobject, jint, jintArray);

/*
 * Class:     org_isis_gme_mgadecorator_MgaDecorator
 * Method:    getPreferredSize
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_mgadecorator_MgaDecorator_getPreferredSize
  (JNIEnv *, jobject, jint, jintArray);

/*
 * Class:     org_isis_gme_mgadecorator_MgaDecorator
 * Method:    setActvie
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_mgadecorator_MgaDecorator_setActvie
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     org_isis_gme_mgadecorator_MgaDecorator
 * Method:    getPorts
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_mgadecorator_MgaDecorator_getPorts
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_isis_gme_mgadecorator_MgaDecorator
 * Method:    getPortLocation
 * Signature: (II[I)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_mgadecorator_MgaDecorator_getPortLocation
  (JNIEnv *, jobject, jint, jint, jintArray);


#ifdef __cplusplus
}
#endif
#endif

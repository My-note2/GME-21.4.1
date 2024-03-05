/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_isis_gme_modeleditor_autorouter_Box */

#ifndef _Included_org_isis_gme_modeleditor_autorouter_Box
#define _Included_org_isis_gme_modeleditor_autorouter_Box
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_isis_gme_modeleditor_autorouter_Box
 * Method:    createNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Box_createNative
  (JNIEnv *, jobject);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Box
 * Method:    deleteNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Box_deleteNative
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Box
 * Method:    setRect
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Box_setRect
  (JNIEnv *, jobject, jint, jint, jint, jint, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Box
 * Method:    addPort
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Box_addPort
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_isis_gme_modeleditor_autorouter_Path */

#ifndef _Included_org_isis_gme_modeleditor_autorouter_Path
#define _Included_org_isis_gme_modeleditor_autorouter_Path
#ifdef __cplusplus
extern "C" {
#endif
#undef org_isis_gme_modeleditor_autorouter_Path_END_ON_DEFAULT
#define org_isis_gme_modeleditor_autorouter_Path_END_ON_DEFAULT 0L
#undef org_isis_gme_modeleditor_autorouter_Path_END_ON_TOP
#define org_isis_gme_modeleditor_autorouter_Path_END_ON_TOP 16L
#undef org_isis_gme_modeleditor_autorouter_Path_END_ON_RIGHT
#define org_isis_gme_modeleditor_autorouter_Path_END_ON_RIGHT 32L
#undef org_isis_gme_modeleditor_autorouter_Path_END_ON_BOTTOM
#define org_isis_gme_modeleditor_autorouter_Path_END_ON_BOTTOM 48L
#undef org_isis_gme_modeleditor_autorouter_Path_END_ON_LEFT
#define org_isis_gme_modeleditor_autorouter_Path_END_ON_LEFT 64L
#undef org_isis_gme_modeleditor_autorouter_Path_END_MASK
#define org_isis_gme_modeleditor_autorouter_Path_END_MASK 112L
#undef org_isis_gme_modeleditor_autorouter_Path_START_ON_DEFAULT
#define org_isis_gme_modeleditor_autorouter_Path_START_ON_DEFAULT 0L
#undef org_isis_gme_modeleditor_autorouter_Path_START_ON_TOP
#define org_isis_gme_modeleditor_autorouter_Path_START_ON_TOP 256L
#undef org_isis_gme_modeleditor_autorouter_Path_START_ON_RIGHT
#define org_isis_gme_modeleditor_autorouter_Path_START_ON_RIGHT 512L
#undef org_isis_gme_modeleditor_autorouter_Path_START_ON_BOTTOM
#define org_isis_gme_modeleditor_autorouter_Path_START_ON_BOTTOM 768L
#undef org_isis_gme_modeleditor_autorouter_Path_START_ON_LEFT
#define org_isis_gme_modeleditor_autorouter_Path_START_ON_LEFT 1024L
#undef org_isis_gme_modeleditor_autorouter_Path_BEGIN_MASK
#define org_isis_gme_modeleditor_autorouter_Path_BEGIN_MASK 1792L
/*
 * Class:     org_isis_gme_modeleditor_autorouter_Path
 * Method:    createNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Path_createNative
  (JNIEnv *, jobject);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Path
 * Method:    deleteNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Path_deleteNative
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Path
 * Method:    getCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Path_getCount
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Path
 * Method:    getHead
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Path_getHead
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Path
 * Method:    getNext
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Path_getNext
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Path
 * Method:    getX
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Path_getX
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Path
 * Method:    getY
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Path_getY
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Path
 * Method:    setEndDir
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Path_setEndDir
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Path
 * Method:    setStartDir
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Path_setStartDir
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_isis_gme_modeleditor_autorouter_Port */

#ifndef _Included_org_isis_gme_modeleditor_autorouter_Port
#define _Included_org_isis_gme_modeleditor_autorouter_Port
#ifdef __cplusplus
extern "C" {
#endif
#undef org_isis_gme_modeleditor_autorouter_Port_END_ON_TOP
#define org_isis_gme_modeleditor_autorouter_Port_END_ON_TOP 1L
#undef org_isis_gme_modeleditor_autorouter_Port_END_ON_RIGHT
#define org_isis_gme_modeleditor_autorouter_Port_END_ON_RIGHT 2L
#undef org_isis_gme_modeleditor_autorouter_Port_END_ON_BOTTOM
#define org_isis_gme_modeleditor_autorouter_Port_END_ON_BOTTOM 4L
#undef org_isis_gme_modeleditor_autorouter_Port_END_ON_LEFT
#define org_isis_gme_modeleditor_autorouter_Port_END_ON_LEFT 8L
#undef org_isis_gme_modeleditor_autorouter_Port_END_ON_ALL
#define org_isis_gme_modeleditor_autorouter_Port_END_ON_ALL 15L
#undef org_isis_gme_modeleditor_autorouter_Port_START_ON_TOP
#define org_isis_gme_modeleditor_autorouter_Port_START_ON_TOP 16L
#undef org_isis_gme_modeleditor_autorouter_Port_START_ON_RIGHT
#define org_isis_gme_modeleditor_autorouter_Port_START_ON_RIGHT 32L
#undef org_isis_gme_modeleditor_autorouter_Port_START_ON_BOTTOM
#define org_isis_gme_modeleditor_autorouter_Port_START_ON_BOTTOM 64L
#undef org_isis_gme_modeleditor_autorouter_Port_START_ON_LEFT
#define org_isis_gme_modeleditor_autorouter_Port_START_ON_LEFT 128L
#undef org_isis_gme_modeleditor_autorouter_Port_START_ON_ALL
#define org_isis_gme_modeleditor_autorouter_Port_START_ON_ALL 240L
#undef org_isis_gme_modeleditor_autorouter_Port_CONNECT_ON_ALL
#define org_isis_gme_modeleditor_autorouter_Port_CONNECT_ON_ALL 255L
#undef org_isis_gme_modeleditor_autorouter_Port_CONNECT_TO_CENTER
#define org_isis_gme_modeleditor_autorouter_Port_CONNECT_TO_CENTER 256L
#undef org_isis_gme_modeleditor_autorouter_Port_START_END_HORIZ
#define org_isis_gme_modeleditor_autorouter_Port_START_END_HORIZ 170L
#undef org_isis_gme_modeleditor_autorouter_Port_START_END_VERT
#define org_isis_gme_modeleditor_autorouter_Port_START_END_VERT 85L
#undef org_isis_gme_modeleditor_autorouter_Port_DEFAULT
#define org_isis_gme_modeleditor_autorouter_Port_DEFAULT 255L
/*
 * Class:     org_isis_gme_modeleditor_autorouter_Port
 * Method:    createNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Port_createNative
  (JNIEnv *, jobject);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Port
 * Method:    deleteNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Port_deleteNative
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Port
 * Method:    setRect
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Port_setRect
  (JNIEnv *, jobject, jint, jint, jint, jint, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Port
 * Method:    setAttributes
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Port_setAttributes
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Port
 * Method:    getAttributes
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Port_getAttributes
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_isis_gme_modeleditor_autorouter_Graph */

#ifndef _Included_org_isis_gme_modeleditor_autorouter_Graph
#define _Included_org_isis_gme_modeleditor_autorouter_Graph
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_isis_gme_modeleditor_autorouter_Graph
 * Method:    createNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Graph_createNative
  (JNIEnv *, jobject);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Graph
 * Method:    deleteNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Graph_deleteNative
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Graph
 * Method:    addBox
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Graph_addBox
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Graph
 * Method:    addPath
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Graph_addPath
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Graph
 * Method:    removeBox
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Graph_removeBox
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Graph
 * Method:    removePath
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_isis_gme_modeleditor_autorouter_Graph_removePath
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_isis_gme_modeleditor_autorouter_Graph
 * Method:    autoRoute
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_isis_gme_modeleditor_autorouter_Graph_autoRoute
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_isis_gme_modeleditor_autorouter_Native */

#ifndef _Included_org_isis_gme_modeleditor_autorouter_Native
#define _Included_org_isis_gme_modeleditor_autorouter_Native
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif

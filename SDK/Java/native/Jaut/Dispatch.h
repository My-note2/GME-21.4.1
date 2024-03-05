/*
 * Copyright (c) 2002, Vanderbilt University
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE VANDERBILT UNIVERSITY BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE VANDERBILT
 * UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE VANDERBILT UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE VANDERBILT UNIVERSITY HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Author: Miklos Maroti, Gyorgy Balogh
 * Date last modified: 10/23/03
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_isis_jaut_Dispatch */

#ifndef _Included_org_isis_jaut_Dispatch
#define _Included_org_isis_jaut_Dispatch
#ifdef __cplusplus
extern "C" {
#endif
#undef org_isis_jaut_Dispatch_CLSCTX_INPROC_SERVER
#define org_isis_jaut_Dispatch_CLSCTX_INPROC_SERVER 1L
#undef org_isis_jaut_Dispatch_CLSCTX_INPROC_HANDLER
#define org_isis_jaut_Dispatch_CLSCTX_INPROC_HANDLER 2L
#undef org_isis_jaut_Dispatch_CLSCTX_LOCAL_SERVER
#define org_isis_jaut_Dispatch_CLSCTX_LOCAL_SERVER 4L
#undef org_isis_jaut_Dispatch_DISPID_VALUE
#define org_isis_jaut_Dispatch_DISPID_VALUE 0L
#undef org_isis_jaut_Dispatch_DISPID_PROPERTYPUT
#define org_isis_jaut_Dispatch_DISPID_PROPERTYPUT -3L
#undef org_isis_jaut_Dispatch_DISPID_EVALUATE
#define org_isis_jaut_Dispatch_DISPID_EVALUATE -5L
#undef org_isis_jaut_Dispatch_DISPATCH_METHOD
#define org_isis_jaut_Dispatch_DISPATCH_METHOD 1L
#undef org_isis_jaut_Dispatch_DISPATCH_PROPERTYGET
#define org_isis_jaut_Dispatch_DISPATCH_PROPERTYGET 2L
#undef org_isis_jaut_Dispatch_DISPATCH_PROPERTYPUT
#define org_isis_jaut_Dispatch_DISPATCH_PROPERTYPUT 4L
#undef org_isis_jaut_Dispatch_DISPATCH_PROPERTYPUTREF
#define org_isis_jaut_Dispatch_DISPATCH_PROPERTYPUTREF 8L
/* Inaccessible static: DISPID_PROPERTYPUT_ARG */
/*
 * Class:     org_isis_jaut_Dispatch
 * Method:    attach
 * Signature: (Lorg/isis/jaut/Variant;)V
 */
JNIEXPORT void JNICALL Java_org_isis_jaut_Dispatch_attach__Lorg_isis_jaut_Variant_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_isis_jaut_Dispatch
 * Method:    attach
 * Signature: (Lorg/isis/jaut/Dispatch;)V
 */
JNIEXPORT void JNICALL Java_org_isis_jaut_Dispatch_attach__Lorg_isis_jaut_Dispatch_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_isis_jaut_Dispatch
 * Method:    attach
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_isis_jaut_Dispatch_attach__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_isis_jaut_Dispatch
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_isis_jaut_Dispatch_release
  (JNIEnv *, jobject);

/*
 * Class:     org_isis_jaut_Dispatch
 * Method:    hashCode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_isis_jaut_Dispatch_hashCode
  (JNIEnv *, jobject);

/*
 * Class:     org_isis_jaut_Dispatch
 * Method:    changeInterface
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_isis_jaut_Dispatch_changeInterface
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_isis_jaut_Dispatch
 * Method:    attachNewInstance
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_isis_jaut_Dispatch_attachNewInstance
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     org_isis_jaut_Dispatch
 * Method:    attachActiveObject
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_isis_jaut_Dispatch_attachActiveObject
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_isis_jaut_Dispatch
 * Method:    getIDsOfNames
 * Signature: ([Ljava/lang/String;)[I
 */
JNIEXPORT jintArray JNICALL Java_org_isis_jaut_Dispatch_getIDsOfNames
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     org_isis_jaut_Dispatch
 * Method:    getIDOfName
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_isis_jaut_Dispatch_getIDOfName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_isis_jaut_Dispatch
 * Method:    invoke
 * Signature: (II[Lorg/isis/jaut/Variant;[ILorg/isis/jaut/Variant;)V
 */
JNIEXPORT void JNICALL Java_org_isis_jaut_Dispatch_invoke
  (JNIEnv *, jobject, jint, jint, jobjectArray, jintArray, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_github_yylyingy_gifencodedecode_GifEncoder */

#ifndef _Included_io_github_yylyingy_gifencodedecode_GifEncoder
#define _Included_io_github_yylyingy_gifencodedecode_GifEncoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_github_yylyingy_gifencodedecode_GifEncoder
 * Method:    nativeInit
 * Signature: (IILjava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_io_github_yylyingy_gifencodedecode_GifEncoder_nativeInit
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     io_github_yylyingy_gifencodedecode_GifEncoder
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_github_yylyingy_gifencodedecode_GifEncoder_nativeClose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_github_yylyingy_gifencodedecode_GifEncoder
 * Method:    nativeSetDither
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_io_github_yylyingy_gifencodedecode_GifEncoder_nativeSetDither
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     io_github_yylyingy_gifencodedecode_GifEncoder
 * Method:    nativeEncodeFrame
 * Signature: (JLandroid/graphics/Bitmap;I)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_yylyingy_gifencodedecode_GifEncoder_nativeEncodeFrame
  (JNIEnv *, jobject, jlong, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
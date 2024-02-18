#include <jni.h>
/* Header for class jeyn_epoll_NativeEpollApi */

#ifndef _Included_jeyn_epoll_NativeEpollApi
#define _Included_jeyn_epoll_NativeEpollApi
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollin
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollin
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollout
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollout
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollrdhup
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollrdhup
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollet
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollet
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollerr
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollerr
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollCtlAdd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollCtlAdd
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollCtlMod
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollCtlMod
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollCtlDel
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollCtlDel
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeTimerFd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeTimerFd
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeTimerFdRead
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeTimerFdRead
  (JNIEnv *, jclass, jint);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeTimerFdSetTime
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeTimerFdSetTime
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEventFd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEventFd
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEventFdWrite
 * Signature: (IJ)I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEventFdWrite
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEventFdRead
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEventFdRead
  (JNIEnv *, jclass, jint);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollCreate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollCreate
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollWait
 * Signature: (IJII)I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollWait
  (JNIEnv *, jclass, jint, jlong, jint, jint);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollCtl
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollCtl
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEpollPolling
 * Signature: (IJI)I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEpollPolling
  (JNIEnv *, jclass, jint, jlong, jint);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEPollEventSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEPollEventSize
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEPollDataOffset
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEPollDataOffset
  (JNIEnv *, jclass);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeNewEpollEvents
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_jeyn_epoll_NativeEpollApi_nativeNewEpollEvents
  (JNIEnv *, jclass, jint);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeFdFromEpollEvents
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeFdFromEpollEvents
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeEventsFromEpollEvents
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_jeyn_epoll_NativeEpollApi_nativeEventsFromEpollEvents
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeMalloc
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_jeyn_epoll_NativeEpollApi_nativeMalloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeFree
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jeyn_epoll_NativeEpollApi_nativeFree
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_jeyn_epoll_NativeEpollApi_nativeClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     jeyn_epoll_NativeEpollApi
 * Method:    nativeMemcopy
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_jeyn_epoll_NativeEpollApi_nativeMemcopy
  (JNIEnv *, jclass, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif

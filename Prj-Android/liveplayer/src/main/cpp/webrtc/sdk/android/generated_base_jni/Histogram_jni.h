// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/Histogram

#ifndef org_webrtc_Histogram_JNI
#define org_webrtc_Histogram_JNI

#include <jni.h>

#include "webrtc/sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_Histogram[];
const char kClassPath_org_webrtc_Histogram[] = "org/webrtc/Histogram";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_Histogram_clazz(nullptr);
#ifndef org_webrtc_Histogram_clazz_defined
#define org_webrtc_Histogram_clazz_defined
inline jclass org_webrtc_Histogram_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_Histogram,
      &g_org_webrtc_Histogram_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static jlong JNI_Histogram_CreateCounts(JNIEnv* env, const base::android::JavaParamRef<jstring>&
    name,
    jint min,
    jint max,
    jint bucketCount);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_Histogram_nativeCreateCounts(
    JNIEnv* env,
    jclass jcaller,
    jstring name,
    jint min,
    jint max,
    jint bucketCount) {
  return JNI_Histogram_CreateCounts(env, base::android::JavaParamRef<jstring>(env, name), min, max,
      bucketCount);
}

static jlong JNI_Histogram_CreateEnumeration(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& name,
    jint max);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_Histogram_nativeCreateEnumeration(
    JNIEnv* env,
    jclass jcaller,
    jstring name,
    jint max) {
  return JNI_Histogram_CreateEnumeration(env, base::android::JavaParamRef<jstring>(env, name), max);
}

static void JNI_Histogram_AddSample(JNIEnv* env, jlong handle,
    jint sample);

JNI_GENERATOR_EXPORT void Java_org_webrtc_Histogram_nativeAddSample(
    JNIEnv* env,
    jclass jcaller,
    jlong handle,
    jint sample) {
  return JNI_Histogram_AddSample(env, handle, sample);
}


}  // namespace jni
}  // namespace  webrtc

// Step 4: Generated test functions (optional).


#endif  // org_webrtc_Histogram_JNI

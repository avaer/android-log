#include <nan.h>
#include <stdio.h>
#include <android/log.h>

using namespace v8;

NAN_METHOD(Log) {
  size_t numArgs = info.Length();
  if (numArgs == 0) {
    __android_log_print(ANDROID_LOG_INFO, "node", "");
  } else if (numArgs == 1) {
    Nan::Utf8String s1(info[0]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s", *s1);
  } else if (numArgs == 2) {
    Nan::Utf8String s1(info[0]->ToString());
    Nan::Utf8String s2(info[1]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s %s", *s1, *s2);
  } else if (numArgs == 3) {
    Nan::Utf8String s1(info[0]->ToString());
    Nan::Utf8String s2(info[1]->ToString());
    Nan::Utf8String s3(info[2]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s %s %s", *s1, *s2, *s3);
  } else if (numArgs == 4) {
    Nan::Utf8String s1(info[0]->ToString());
    Nan::Utf8String s2(info[1]->ToString());
    Nan::Utf8String s3(info[2]->ToString());
    Nan::Utf8String s4(info[3]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s %s %s %s", *s1, *s2, *s3, *s4);
  } else if (numArgs == 5) {
    Nan::Utf8String s1(info[0]->ToString());
    Nan::Utf8String s2(info[1]->ToString());
    Nan::Utf8String s3(info[2]->ToString());
    Nan::Utf8String s4(info[3]->ToString());
    Nan::Utf8String s5(info[4]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s %s %s %s %s", *s1, *s2, *s3, *s4, *s5);
  } else if (numArgs == 6) {
    Nan::Utf8String s1(info[0]->ToString());
    Nan::Utf8String s2(info[1]->ToString());
    Nan::Utf8String s3(info[2]->ToString());
    Nan::Utf8String s4(info[3]->ToString());
    Nan::Utf8String s5(info[4]->ToString());
    Nan::Utf8String s6(info[5]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s %s %s %s %s %s", *s1, *s2, *s3, *s4, *s5, *s6);
  } else if (numArgs == 6) {
    Nan::Utf8String s1(info[0]->ToString());
    Nan::Utf8String s2(info[1]->ToString());
    Nan::Utf8String s3(info[2]->ToString());
    Nan::Utf8String s4(info[3]->ToString());
    Nan::Utf8String s5(info[4]->ToString());
    Nan::Utf8String s6(info[5]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s %s %s %s %s %s", *s1, *s2, *s3, *s4, *s5, *s6);
  } else if (numArgs == 7) {
    Nan::Utf8String s1(info[0]->ToString());
    Nan::Utf8String s2(info[1]->ToString());
    Nan::Utf8String s3(info[2]->ToString());
    Nan::Utf8String s4(info[3]->ToString());
    Nan::Utf8String s5(info[4]->ToString());
    Nan::Utf8String s6(info[5]->ToString());
    Nan::Utf8String s7(info[6]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s %s %s %s %s %s %s", *s1, *s2, *s3, *s4, *s5, *s6, *s7);
  } else if (numArgs == 8) {
    Nan::Utf8String s1(info[0]->ToString());
    Nan::Utf8String s2(info[1]->ToString());
    Nan::Utf8String s3(info[2]->ToString());
    Nan::Utf8String s4(info[3]->ToString());
    Nan::Utf8String s5(info[4]->ToString());
    Nan::Utf8String s6(info[5]->ToString());
    Nan::Utf8String s7(info[6]->ToString());
    Nan::Utf8String s8(info[7]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s %s %s %s %s %s %s %s", *s1, *s2, *s3, *s4, *s5, *s6, *s7, *s8);
  } else if (numArgs == 9) {
    Nan::Utf8String s1(info[0]->ToString());
    Nan::Utf8String s2(info[1]->ToString());
    Nan::Utf8String s3(info[2]->ToString());
    Nan::Utf8String s4(info[3]->ToString());
    Nan::Utf8String s5(info[4]->ToString());
    Nan::Utf8String s6(info[5]->ToString());
    Nan::Utf8String s7(info[6]->ToString());
    Nan::Utf8String s8(info[7]->ToString());
    Nan::Utf8String s9(info[8]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s %s %s %s %s %s %s %s %s", *s1, *s2, *s3, *s4, *s5, *s6, *s7, *s8, *s9);
  } else if (numArgs == 10) {
    Nan::Utf8String s1(info[0]->ToString());
    Nan::Utf8String s2(info[1]->ToString());
    Nan::Utf8String s3(info[2]->ToString());
    Nan::Utf8String s4(info[3]->ToString());
    Nan::Utf8String s5(info[4]->ToString());
    Nan::Utf8String s6(info[5]->ToString());
    Nan::Utf8String s7(info[6]->ToString());
    Nan::Utf8String s8(info[7]->ToString());
    Nan::Utf8String s9(info[8]->ToString());
    Nan::Utf8String s10(info[9]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s %s %s %s %s %s %s %s %s %s", *s1, *s2, *s3, *s4, *s5, *s6, *s7, *s8, *s9, *s10);
  } else {
    Nan::ThrowError("Too many arguments to log");
  }
}

NAN_MODULE_INIT(InitAll) {
  Nan::Set(target, Nan::New<String>("log").ToLocalChecked(), Nan::GetFunction(Nan::New<FunctionTemplate>(Log)).ToLocalChecked());
}

NODE_MODULE(a_native_module, InitAll)

#include <nan.h>
#include <stdio.h>
#include <android/log.h>

using namespace v8;

NAN_METHOD(Log) {
  if (info.Length() == 1) {
    Nan::Utf8String s1(info[0]->ToString());
    __android_log_print(ANDROID_LOG_INFO, "node", "%s", *s1);
  } else {
    Nan::ThrowError("Invalid arguments to log");
  }
}

NAN_MODULE_INIT(InitAll) {
  Nan::Set(target, Nan::New<String>("log").ToLocalChecked(), Nan::GetFunction(Nan::New<FunctionTemplate>(Log)).ToLocalChecked());
}

NODE_MODULE(a_native_module, InitAll)

#include <android/log.h>
#define LOG_TAG "TestLog"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

void main() {
char name[50] = "Hello TestLog";
LOGD("name: %s\n", name);
}


/*--------------------
$ ndk-build
[armeabi] Compile thumb  : testlog <= main.c
[armeabi] Executable     : testlog
[armeabi] Install        : testlog => libs/armeabi/testlog

  adb push libs/armeabi/testlog /data/local/tmp
  adb shell /data/local/tmp/testlog

 adb logcat -s TestLog
 D/TestLog ( 3491): name: Hello TestLog

  --------------------*/

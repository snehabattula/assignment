#include <jni.h>
#include <opencv2/opencv.hpp>
#include <android/log.h>

#define LOG_TAG "EdgeDetect"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

extern "C"
JNIEXPORT void JNICALL
Java_com_example_edgedetection_MainActivity_processFrame(
        JNIEnv *env, jobject thiz, jlong matAddrInput, jlong matAddrOutput) {
    cv::Mat &input = *(cv::Mat *) matAddrInput;
    cv::Mat &output = *(cv::Mat *) matAddrOutput;

    cv::cvtColor(input, output, cv::COLOR_RGBA2GRAY);
    cv::Canny(output, output, 50, 150);
    LOGD("Frame processed with Canny edge detection");
}

//
// Created by 12108 on 2021/11/29.
//

#ifndef NCNN_ANDROID_YOLOX_SLPN_H
#define NCNN_ANDROID_YOLOX_SLPN_H
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

extern int k1;

#include <net.h>

#include "yolox.h"



class Mspn
{
public:
    Mspn();

    int load(const char* modeltype, int target_size, const float* mean_vals, const float* norm_vals, bool use_gpu = false);

    int load(AAssetManager* mgr, const char* modeltype, int target_size, const float* mean_vals, const float* norm_vals, bool use_gpu = false);

    int detect_and_draw(const cv::Mat& rgb, std::vector<Object>& objects);

private:

    ncnn::Net mspn;

    float* x = new float[192*256*3];

    std::vector<int> img_size={192,256};

    int target_size;
    float mean_vals[3];
    float norm_vals[3];

    ncnn::UnlockedPoolAllocator blob_pool_allocator;
    ncnn::PoolAllocator workspace_pool_allocator;
};
#endif //NCNN_ANDROID_YOLOX_SLPN_H

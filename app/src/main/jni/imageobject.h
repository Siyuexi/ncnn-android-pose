//
// Created by Siyuexi on 2022/5/7.
//
#include<opencv2/core/core.hpp>
struct Object
{
    cv::Rect_<float> rect;
    int label;
    float prob;
};


//
// Created by Zhou Yang  on 24/04/2018.
//

#ifndef OPENCV_DEMO_DISPLAYIMAGE_H
#define OPENCV_DEMO_DISPLAYIMAGE_H


#include <string>
#include <opencv2/opencv.hpp>

class DisplayImage {
private:
    cv::Mat image;
    cv::Mat grayImage;

public:
    const cv::Mat &getImage() const;
    void setImage(const std::string imagePath);

public:
    void showImage();
    void showGrayImage();
    void change2Gray(std::string grayImagePath);
};


#endif //OPENCV_DEMO_DISPLAYIMAGE_H

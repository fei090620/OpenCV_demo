//
// Created by Zhou Yang  on 24/04/2018.
//

#include "DisplayImage.h"

void DisplayImage::setImage(const std::string imagePath) {
    this->image = cv::imread(imagePath, 1);
}

const cv::Mat & DisplayImage::getImage() const {
    return this->image;
}

void DisplayImage::showImage() {
    if ( !this->image.data )
    {
        printf("No image data \n");
    }

    const char *winname = "Display Image";
    cv::namedWindow(winname, cv::WINDOW_AUTOSIZE);
    cv::imshow(winname, this->image);
}

void DisplayImage::change2Gray(std::string grayImagePath) {
    cv::cvtColor(this->image, this->grayImage, cv::COLOR_BGR2GRAY);
    cv::imwrite(grayImagePath, this->grayImage);
}

void DisplayImage::showGrayImage() {
    if (!this->grayImage.data)
    {
        printf("No gray image data \n");
    }

    const char *winname = "Display gray Image";
    cv::namedWindow(winname, cv::WINDOW_AUTOSIZE);
    cv::imshow(winname, this->grayImage);
}

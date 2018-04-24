#include <cstdio>
#include <opencv2/opencv.hpp>
#include "DisplayImage.h"

using namespace cv;
int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }

    std::cout<<argv[1]<<std::endl;

    DisplayImage image;
    image = DisplayImage();
    image.setImage(argv[1]);
    image.showImage();
    image.change2Gray("./gray_image.jpg");
    image.showGrayImage();

    waitKey(0);
    return 0;
}
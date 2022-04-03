#include "opencv2/opencv.hpp"
#include <iostream>

int main()
{
    cv::Mat img;
    img = cv::imread("bbong.jpg");

    if(img.empty())
    {
        std::cout << "failure to load" << std::endl;
        cv::imshow("image", img);
	    return -1;
    }

    cv::namedWindow("image");
    cv::imshow("image", img);

    cv::waitKey();
    return 0;
}
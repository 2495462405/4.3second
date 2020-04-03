//
//  main.cpp
//  test
//
//  Created by 徐亦燊 on 2020/2/28.
//  Copyright © 2020 徐亦燊. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    

        Mat dstMat;
        Mat srcMat = imread("/Users/xuyishen/Desktop/sa jiganyouhaximeiyouga/2020.4.3/2/lena.jpg");
    if (srcMat.empty()) return -1;
    float angle = -10.0,scale =1;
    Point2f center(srcMat.cols*0.5,srcMat.rows*0.5);
    const Mat affine_matrix = getRotationMatrix2D(center,angle,scale);
    warpAffine(srcMat,dstMat,affine_matrix,srcMat.size());
        imshow("src",srcMat);
        imshow("dst",dstMat);
        
        waitKey(0);
        
    
    }

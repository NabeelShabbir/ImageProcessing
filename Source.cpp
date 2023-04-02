
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{

    /*----------------------------------------------------------------Task-1---------------------------------------------------------------*/


    //Mat img, dst;
    //img = imread("C:\\Users\\redru\\OneDrive\\Desktop\\Programming\\DSA\\Assignment 1\\Segmented Outputs\\mIMD328.bmp", IMREAD_GRAYSCALE);
    //img.convertTo(dst, CV_32F);

    //float** arrOut = new float* [dst.rows];
    //for (int i = 0; i < dst.rows; i++)
    //{
    //    arrOut[i] = new float[dst.cols];
    //}

    //for (int i = 0; i < dst.rows; ++i)
    //{
    //    for (int j = 0; j < dst.cols; ++j)
    //    {
    //        arrOut[i][j] = dst.at<float>(i, j);
    //    }
    //}


    //imshow("Display Window", dst);
    //waitKey(0);

    //float** ptr1 = Connected_Components_Labeling(arrOut, dst.rows, dst.cols);


    //for (int i = 0; i < dst.rows; ++i)
    //{
    //    for (int j = 0; j < dst.cols; ++j)
    //    {
    //        dst.at<float>(i, j) = ptr1[i][j];
    //    }
    //}


    //imshow("Display Window", dst);
    //waitKey(0);


    /*----------------------------------------------------------------Task-2---------------------------------------------------------------*/



    //Mat img, dst;
    //img = imread("C:\\Users\\redru\\OneDrive\\Desktop\\Programming\\DSA\\Assignment 1\\Original Images\\IMD328.bmp", IMREAD_GRAYSCALE);
    //img.convertTo(dst, CV_32F);

    //float** arrOut = new float* [dst.rows];
    //for (int i = 0; i < dst.rows; i++)
    //{
    //    arrOut[i] = new float[dst.cols];
    //}

    //for (int i = 0; i < dst.rows; ++i)
    //{
    //    for (int j = 0; j < dst.cols; ++j)
    //    {
    //        arrOut[i][j] = dst.at<float>(i, j);
    //    }
    //}

    //float** ptr = k_means_clustering(arrOut, dst.rows, dst.cols);


    //for (int i = 0; i < dst.rows; ++i)
    //{
    //    for (int j = 0; j < dst.cols; ++j)
    //    {
    //        dst.at<float>(i, j) = ptr[i][j];
    //    }
    //}


    //imshow("Display Window", dst);
    //waitKey(0);



    /*----------------------------------------------------------------Task-3/1---------------------------------------------------------------*/

    //    Mat img, dst;
    //img = imread("C:\\Users\\redru\\OneDrive\\Desktop\\Programming\\DSA\\Assignment 1\\Original Images\\IMD328.bmp", IMREAD_GRAYSCALE);
    //img.convertTo(dst, CV_32F);

    //Mat img2, dst2;
    //img2 = imread("C:\\Users\\redru\\OneDrive\\Desktop\\Programming\\DSA\\Assignment 1\\Ground Truths\\IMD328_lesion.bmp", IMREAD_GRAYSCALE);
    //img2.convertTo(dst2, CV_32F);



    //    float** arrOut = new float* [dst.rows];
    //for (int i = 0; i < dst.rows; i++)
    //{
    //    arrOut[i] = new float[dst.cols];
    //}

    //for (int i = 0; i < dst.rows; ++i)
    //{
    //    for (int j = 0; j < dst.cols; ++j)
    //    {
    //        arrOut[i][j] = dst.at<float>(i, j);
    //    }
    //}


    //float** ptr = k_means_clustering(arrOut, dst.rows, dst.cols);

    //for (int i = 0; i < dst2.rows; ++i)
    //{
    //    for (int j = 0; j < dst2.cols; ++j)
    //    {
    //        arrOut[i][j] = dst2.at<float>(i, j);
    //    }
    //}

    //float DC = Dice_Coefficient(arrOut, ptr, dst.rows, dst.cols);

    //cout << endl << endl << endl << "The Dice Co-Efficient of Ground Truth Image and k_mean Algorithmised Image is: " << DC << endl << endl << endl;

    /*----------------------------------------------------------------Task-3/2---------------------------------------------------------------*/


    //Mat img, dst;
    //img = imread("C:\\Users\\redru\\OneDrive\\Desktop\\Programming\\DSA\\Assignment 1\\Segmented Outputs\\mIMD328.bmp", IMREAD_GRAYSCALE);
    //img.convertTo(dst, CV_32F);

    //Mat img2, dst2;
    //img2 = imread("C:\\Users\\redru\\OneDrive\\Desktop\\Programming\\DSA\\Assignment 1\\Ground Truths\\IMD328_lesion.bmp", IMREAD_GRAYSCALE);
    //img2.convertTo(dst2, CV_32F);



    //    float** arrOut = new float* [dst.rows];
    //for (int i = 0; i < dst.rows; i++)
    //{
    //    arrOut[i] = new float[dst.cols];
    //}

    //for (int i = 0; i < dst.rows; ++i)
    //{
    //    for (int j = 0; j < dst.cols; ++j)
    //    {
    //        arrOut[i][j] = dst.at<float>(i, j);
    //    }
    //}


    //float** ptr = Connected_Components_Labeling(arrOut, dst.rows, dst.cols);

    //for (int i = 0; i < dst2.rows; ++i)
    //{
    //    for (int j = 0; j < dst2.cols; ++j)
    //    {
    //        arrOut[i][j] = dst2.at<float>(i, j);
    //    }
    //}

    //float DC = Dice_Coefficient(arrOut, ptr, dst.rows, dst.cols);



    //cout << endl << endl << endl << "The Dice Co-Efficient of Ground Truth Image and Connected Componentes Labelled Image is: " << DC << endl << endl << endl;

    /*----------------------------------------------------------------Task-4---------------------------------------------------------------*/


    //Mat img, dst;
    //img = imread("C:\\Users\\redru\\OneDrive\\Desktop\\Programming\\DSA\\Assignment 1\\Segmented Outputs\\mIMD328.bmp", IMREAD_GRAYSCALE);
    //img.convertTo(dst, CV_32F);


    //int row = dst.rows;
    //int col = dst.cols;


    //float** arrOut = new float* [dst.rows];
    //for (int i = 0; i < dst.rows; i++)
    //{
    //    arrOut[i] = new float[dst.cols];
    //}

    //for (int i = 0; i < dst.rows; ++i)
    //{
    //    for (int j = 0; j < dst.cols; ++j)
    //    {
    //        arrOut[i][j] = dst.at<float>(i, j);
    //    }
    //}

    //List L1(arrOut, row, col);
    //L1.Display_List();


    return 0;
}


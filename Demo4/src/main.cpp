/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月06日 星期一 14时04分05秒
 ************************************************************************/

#include<iostream>
#include<opencv2/opencv.hpp>
#include"Multiply.h"
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	Multiply mul;
	cout<<mul.multiply(a,b)<<endl;
	cout<<"Start OpenCV"<<endl;
	cv::Mat img1;
	img1=cv::imread("./src/main_page.png");
	if(img1.data==NULL)
	{
		cout<<"Error"<<endl;
		return -1;
	}
	cv::namedWindow("source_image", CV_WINDOW_NORMAL);
	cv::imshow("source_image", img1);
	cv::waitKey(0);
	return 0;
}


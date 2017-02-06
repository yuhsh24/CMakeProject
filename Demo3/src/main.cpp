/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月06日 星期一 14时04分05秒
 ************************************************************************/

#include<iostream>
#include"Multiply.h"
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	Multiply mul;
	cout<<mul.multiply(a,b)<<endl;
}


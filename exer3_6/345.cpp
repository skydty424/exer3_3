#include<iostream.h>
#include<iomanip.h>
void main()
{
float r,pi;
int k;
cout<<"输入圆的半径:";
cin>>r;
cout<<"输入K：";
cin>>k;
pi=3.14159;
switch(k)
{
case 1:cout<<"圆的面积为:"<<pi*r*r<<endl;break;
case 2:cout<<"圆的周长为:"<<pi*r*2<<endl;break;
case 3:cout<<"圆的面积为:"<<pi*r*r<<endl<<"圆的周长为:"<<pi*r*2<<endl;break;
default:cout<<"输入的K值有误";
}
}
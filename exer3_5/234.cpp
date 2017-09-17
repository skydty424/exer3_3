#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,s,d,e;
	cout<<"请输入三角形三边的长:";
cin>>a>>b>>c;
s=(a+b+c)/2;
e=s*(s-a)*(s-b)*(s-c);
d=sqrt(e);
cout<<"三角形的面积为:"<<d;
}
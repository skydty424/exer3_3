#include<iostream.h>
#include<iomanip.h>
void main()
{
int a,b;
cout<<"输入整数a和b:";
cin>>a>>b;
if(a%b==0)
{
cout<<"a/b="<<a/b<<endl;
}
else
{
	cout<<"a/b="<<a/b<<"……"<<a%b<<endl;
}
}
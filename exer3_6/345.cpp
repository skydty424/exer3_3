#include<iostream.h>
#include<iomanip.h>
void main()
{
float r,pi;
int k;
cout<<"����Բ�İ뾶:";
cin>>r;
cout<<"����K��";
cin>>k;
pi=3.14159;
switch(k)
{
case 1:cout<<"Բ�����Ϊ:"<<pi*r*r<<endl;break;
case 2:cout<<"Բ���ܳ�Ϊ:"<<pi*r*2<<endl;break;
case 3:cout<<"Բ�����Ϊ:"<<pi*r*r<<endl<<"Բ���ܳ�Ϊ:"<<pi*r*2<<endl;break;
default:cout<<"�����Kֵ����";
}
}
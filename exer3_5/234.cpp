#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,s,d,e;
	cout<<"���������������ߵĳ�:";
cin>>a>>b>>c;
s=(a+b+c)/2;
e=s*(s-a)*(s-b)*(s-c);
d=sqrt(e);
cout<<"�����ε����Ϊ:"<<d;
}
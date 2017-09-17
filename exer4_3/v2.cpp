#include<iostream.h>
void main()
{
	int x,n;
	x=0;
	cout<<"请输入一个正整数:";
	cin>>n;
	while(x!=0,n!=1)
	{
		x++;
		if(n%2==1)
		{
		n=3*n+1;
		}
	
	else
		if(n%2!=1)
		{
		n=n/2;
		}

	}
	x=x-1;
	cout<<x<<endl;
}
#include<iostream.h>
void main()
{
	int year,n;
	year=2000,n=2;
	cout<<year<<" ";
	while(year<3000)
	{
		year=year+4,n=n+1;
		cout<<year<<" ";
		if(n>=10)
		{
		cout<<endl;
		n=1;
		}
	}
}
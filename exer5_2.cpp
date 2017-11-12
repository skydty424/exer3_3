#include<iostream>
using namespace std;
float fun(int m)
{
	int i;
	float n = 1;
	float f = 1;
	for (i = 1; i <m; )
	{
		i++;
		f = f + i;
		n = n + 1 / f;
	}
	return(n);
}
void main()
{
	int a;
	cin >> a;
	float fun(int a);
	cout << fun(a) << endl;
	system("pause");
}
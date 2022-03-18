#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double a,b,h;
	int i=2;
	scanf("%lf",&h);
	a=h;
	b=h/2.0;
	do
	{
		a=a+2*b;
		b=(1.0/2)*b;
		i++;
	}
	while(i<=10);
	printf("%g\n%g",a,b);
	return 0;
}

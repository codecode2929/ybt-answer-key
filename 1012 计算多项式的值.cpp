#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	double a,b,c,d,x,jie;
	cin>>x>>a>>b>>c>>d;
	jie=a*x*x*x+b*x*x+c*x+d;
	printf("%.7f",jie);
	return 0;
}


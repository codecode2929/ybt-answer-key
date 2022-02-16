#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	float r1,r2,r;
	cin>>r1>>r2;
	r=1/(1/r1+1/r2);
	printf("%.2f",r);
	return 0;
}


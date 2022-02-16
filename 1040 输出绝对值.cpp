#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	float n;
	cin>>n;
	if(n>0)
		printf("%.2f",n);
	if(n==0)
		printf("0");
	if(n<0)
		printf("%.2f",0-n);
	return 0;
}


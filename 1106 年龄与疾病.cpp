#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,t,a[4]={0,0,0,0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(t>=0&&t<=18)	a[0]++;
		if(t>=19&&t<=35)a[1]++;
		if(t>=36&&t<=60)a[2]++;
		if(t>=61)		a[3]++;
	}
	for(int i=0;i<4;i++)
		printf("%0.2f%%\n",a[i]*100.0/n);	
	return 0;
}


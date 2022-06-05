#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,pmax,pmin;
	double a[310],sum=0,max=1000,min=-1000,avg=0,e=0,t=0;
	cin>>n;
	cin>>a[0];
	sum=min=max=a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if(max<a[i]){max=a[i];pmax=i;}
		if(min>a[i]){min=a[i];pmin=i;}
	}
	avg=(sum-max-min)/(n-2);
	for(int i=1;i<n;i++)
	{
		if(i!=pmax&&i!=pmin)
		{
			if(e>abs(avg-a[i]))e=e;
			if(e<abs(avg-a[i]))e=abs(avg-a[i]);
		}
	}
	printf("%.2f %.2f",avg,e);
	return 0;
}


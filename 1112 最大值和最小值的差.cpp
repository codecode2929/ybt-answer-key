#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,max=0,min=10000,a[10010];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>max)max=a[i];
		if(a[i]<min)min=a[i];
	}	
	cout<<max-min;
	return 0;
}


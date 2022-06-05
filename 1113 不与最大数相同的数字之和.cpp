#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,max=-1000000,sum=0,min=100000,a[10010];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>max)max=a[i];
	}	
	for(int i=1;i<=n;i++)
		if(a[i]!=max)sum+=a[i];
	cout<<sum;
	return 0;
}


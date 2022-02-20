#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	double a[110],sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	printf("%.4f",sum/n);
} 

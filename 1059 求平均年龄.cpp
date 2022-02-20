#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long int n,t,sum=0;
	double ping;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		sum+=t;	
	}	
	printf("%.2f",sum/float(n));
}

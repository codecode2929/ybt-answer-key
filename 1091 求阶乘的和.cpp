#include<stdio.h>
#include<iostream>
using namespace std;
long long int jie(int n)
{
	long long int sum=1;
	for(int i=n;i>=1;i--)
		sum*=i;
	return sum;
}
int main()
{
	long long int m=1,n,f1=1,f2=1,f3=2,he=0;
	cin>>n;
	for(int i=m;i<=n;i++)
    	he+=jie(i);
	cout<<he; 
}

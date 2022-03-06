#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int k,a[110],c1=0,c5=0,c10=0;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>a[i];
		if(a[i]==1)c1++;
		if(a[i]==5)c5++;
		if(a[i]==10)c10++;
	}
	cout<<c1<<"\n"<<c5<<"\n"<<c10;
}

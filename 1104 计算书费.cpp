#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{	
	double sum,p[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	int t;
	for(int i=0;i<10;i++)	
	{
		cin>>t;
		sum+=t*p[i];
	}
	cout<<sum;
	return 0;
}


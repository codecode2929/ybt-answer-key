#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b,max=0,d=0;
	for(int i=1;i<=7;i++)
	{
		cin>>a>>b;
		if(a+b>max)
		{
			max=a+b;
			d=i;
		}
	}
	cout<<d;
	return 0;
}


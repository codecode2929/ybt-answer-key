#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int n,p;
	cin>>n;
	double t,sum,x,y,dis;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>p;
		dis=sqrt(x*x+y*y);
		t=dis/50*2;
		t=t+p*1.5;
		sum=sum+t;
	}
	cout<<ceil(sum);
}

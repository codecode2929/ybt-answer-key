#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	double n,x,y,a,b,c;
	cin>>n>>x>>y;
	a=y/x;
	b=n-ceil(a);
	if(b<0)	b=0;
	cout<<b; 
	return 0;
}


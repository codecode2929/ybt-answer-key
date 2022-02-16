#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	double x1,x2,x3,y1,y2,y3,a,b,c,r,s;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	r=(a+b+c)/2;
	s=sqrt(r*(r-a)*(r-b)*(r-c));
	printf("%.2f",s);
	return 0;
}

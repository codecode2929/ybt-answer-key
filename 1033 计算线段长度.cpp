#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	double x1,x2,y1,y2,n;
	cin>>x1>>y1>>x2>>y2;
	printf("%.3lf",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
	return 0;
}


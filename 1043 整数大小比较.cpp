#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	if(x>y)
		cout<<">";
	if(x<y)
		cout<<"<";
	if(x==y)
		cout<<"=";
	return 0;
}


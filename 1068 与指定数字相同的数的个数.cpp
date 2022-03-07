#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int k,m,a[110],ci=0;
	cin>>k>>m;
	for(int i=1;i<=k;i++)
	{
		cin>>a[i];
		if(a[i]==m)
			ci++;
	}
	cout<<ci;
}

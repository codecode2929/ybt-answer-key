#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,a[10010],k,ci=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>k;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==k)
		{
			cout<<i;
			ci=1;
			exit(0);
		}
	}
	cout<<-1;	
	return 0;
}


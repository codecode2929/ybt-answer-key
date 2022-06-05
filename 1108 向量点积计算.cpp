#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,a[1010],b[1010],ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	for(int i=1;i<=n;i++)ans+=a[i]*b[i];
	cout<<ans;
	return 0;
}


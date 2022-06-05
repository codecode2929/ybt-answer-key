#include<iostream>
using namespace std;
int a[10010];
int main()
{
	int l,m;
	cin>>l>>m;
	for(int i=0;i<=l;i++)
		a[i]=1;
	int x,y;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		for(int j=x;j<=y;j++)
			a[j]=0;
	}
	int s=0;
	for(int i=0;i<=l;i++)
		if(a[i]==1)
			s=s+1;
	cout<<s;
}

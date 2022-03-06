#include<iostream>
using namespace std;
int main()
{
   	int n,a[20],b[20],c[20],suma=0,sumb=0,sumc=0;
   	cin>>n;
   	for(int i=1;i<=n;i++)
   	{
	   cin>>a[i]>>b[i]>>c[i];
	   suma+=a[i];
	   sumb+=b[i];
	   sumc+=c[i];
   	}
   	cout<<suma<<" "<<sumb<<" "<<sumc<<" "<<suma+sumb+sumc;
}

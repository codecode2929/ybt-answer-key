#include<iostream>
using namespace std;
int main()
{
	int a[10],i,g,ci=0,n;
	for(i=0;i<10;i++)
		cin>>a[i];	
	cin>>n;
	for(i=0;i<10;i++)
		if(a[i]<=n+30)
			ci++;
	cout<<ci;
}

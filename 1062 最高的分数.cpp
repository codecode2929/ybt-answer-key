#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
     int n,a[110],max=0;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
	 	cin>>a[i];
	 	if(a[i]>max)
	 		max=a[i];
     }
     cout<<max;	
}

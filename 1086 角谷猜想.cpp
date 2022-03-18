#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(1)
	{
		if(n%2==1){printf("%d*3+1=%d\n",n,n*3+1);n=n*3+1;}
		if(n%2==0){printf("%d/2=%d\n",n,n/2);n=n/2;}
		if(n==1){cout<<"End";return 0;}
	} 
	return 0;
}

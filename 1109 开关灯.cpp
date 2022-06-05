#include<iostream>
using namespace std;
int main()
{
	bool a[5001]={  };
	int n=0,m=0;
	cin>>n>>m;
	for(int i=1;i<=m;++i)
		for(int j=1;j<=n;++j)
			if(j%i==0)
				a[j]=!a[j];
	for (int i=1;i<=n;++i)
	{
		if(a[i]&&i!=1)
			cout<<","<<i;
		else if(a[i]&&i==1)
			cout<<i;
	}
}

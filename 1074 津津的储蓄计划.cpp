#include<iostream>
using namespace std;
int main()
{
    int ys,ck=0,xj=0;
	for(int i=1;i<=12;i++)
	{
		cin>>ys;
		xj=300+xj-ys;
		if(xj<0)
		{
			cout<<"-"<<i;
			return 0;
		}
		else
		{
			ck=ck+xj-xj%100;
			xj=xj%100;
		}
	} 
	cout<<ck*1.2+xj;
}

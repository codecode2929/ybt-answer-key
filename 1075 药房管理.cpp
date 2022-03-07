#include<iostream>
using namespace std;
int main()
{
	int m,n,a,s = 0;
	cin>>m>>n;
	for(int i = 0;i<n;i++)
	{
		cin>>a;
		if(m-a>=0)				//判断病人需要的数量超过了当时的库存量,是则减库存,否则增加未取药病人的数量 
			m -= a;
		else
			s++;						
	}
	cout<<s;	
}



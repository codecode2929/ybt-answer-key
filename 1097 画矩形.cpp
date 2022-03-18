#include<iostream>
using namespace std;
int main()
{
    int h,kuan,tai;
    char c;
    cin>>h>>kuan>>c>>tai;
    if(tai==1)
    {
    	for(int i=1;i<=h;i++)
    	{
			for(int j=1;j<=kuan;j++)
    			cout<<c;
    		cout<<"\n";
    	}	
    }
    if(tai==0)
    {
    	for(int j=1;j<=kuan;j++)
    		cout<<c;
    	cout<<"\n";
    	for(int i=2;i<=h-1;i++)
    	{
    		cout<<c;
    		for(int j=2;j<=kuan-1;j++)
    			cout<<" ";
    		cout<<c<<"\n";
    	}
    	for(int j=1;j<=kuan;j++)
    		cout<<c;
    }
    return 0;
}

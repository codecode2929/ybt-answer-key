#include<iostream>
using namespace std;
int main()
{   int k;
    cin>>k;
    double Sn=0;
    int i=0;
    while(Sn<=k)
    {i++;
	Sn+=1.0/i;
	}
	cout<<i<<endl;
    return 0;
}


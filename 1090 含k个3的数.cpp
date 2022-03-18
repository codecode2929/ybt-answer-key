#include<iostream>
using namespace std;
int main()
{   int m,k;
    cin>>m>>k;
    if(m%19==0&&m>=3*k)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}

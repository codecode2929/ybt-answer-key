#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    int temp;
    int i;
    cin>>a>>b>>n;
    for(i=1;i<=n;i++)
    {
        a*=10;
        temp=a/b;//tempģ��洢��iΪС��
        a%=b;
    }
    cout<<temp<<endl;
    return 0;
}

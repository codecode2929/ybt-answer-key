#include<iostream>
using namespace std;
int main()
{
    int n,sum=1;
    int i,j;
 
    cin>>n;
    for(i=2; i<=n; i++) //��2��ʼö��
        for(j=i; j>0; j/=10) //�����λ
            if(j%10==1)	sum++;//����λΪ1��������+1
 
    cout<<sum<<endl;
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int i,j;
 
    cin>>n;
    for(i=2; i<=sqrt(n); i++) //������ͬ���������б���һ����sqrt(n)
    {
        if(n%i==0)//�ҵ�����
        {
            cout<<n/i<<endl;//�ϴ�����=n/��С���������
            break;//�������ֹ
        }
    }
 
    return 0;
}

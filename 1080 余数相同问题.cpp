#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int i;
    cin>>a>>b>>c;
    for(i=2; i<=a; i++) //��2��ʼѰ��
    {
        if(a%i==b%i&&b%i==c%i)//������ͬ
        {
            cout<<i<<endl;//���
            break;//��ֹѭ�����˳�
        }
    }
    return 0;
}

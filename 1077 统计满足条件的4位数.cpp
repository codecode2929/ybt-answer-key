#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int a,b,c,d,sum=0;
    int i;
 
    cin>>n;//���ָ���
    for(i=1; i<=n; i++)
    {
        cin>>m;//ÿ����λ��
        a=m/1000;//ǧλ
        b=m/100%10;//��λ
        c=m/10%10;//ʮλ
        d=m%10;//��λ
        if(d-a-b-c>0)	sum++;//�����������ۼ�
    }
    cout<<sum<<endl;
    return 0;
}

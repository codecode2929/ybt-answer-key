#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    int i;
 
    cin>>n;//����
    for(i=1; i<=n; i++) //��һ����1��ʼ�����ÿ�˱�ǰһ�˶�һ��
        sum+=i;//�ۼ�
    cout<<sum<<endl;
    return 0;
}

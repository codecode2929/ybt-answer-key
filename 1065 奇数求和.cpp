#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int sum=0;//��ʼ��
    int i;
 
    cin>>a>>b;
    if(a%2==0)	a++;//��֤��������ʼ��
    for(i=a; i<=b; i+=2) //����������
        sum+=i;
 
    cout<<sum<<endl;
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int n;
    int i,j;
    int sum=0;
 
    cin>>n;
    for(i=2;; i++)
    {
        for(j=2; j<=sqrt(i)&&i%j!=0; j++); //�ж�i�Ƿ�Ϊ����
        if(j>sqrt(i))//��������
        {
            sum++;//�ۼ�sum�������ǵ�sumС��
            if(sum==n)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
 
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,a[101][2];
    int max=0,sum=0;
    int i;
 
    cin>>n;//����n��
    for(i=1; i<=n; i++) //ÿ��Сʱ�����
    {
        cin>>a[i][0]>>a[i][1];//����ѹ������ѹ
        if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90)//�ж��Ƿ�����
        {
            sum++;
            if(sum>max)//�������Ŀǰ���������Сʱ��
                max=sum;//�滻max��ֵ
        }
        else sum=0;//�������Сʱ�ڲ�����������sum
    }
    cout<<max<<endl;
    return 0;
}

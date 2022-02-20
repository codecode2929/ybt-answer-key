#include <iostream>
#include <cstdio>
#include <cmath>
#define precision_1 1e-12//�Լ���һ���ȣ������жϸ�������С
#define precision_2 1e-6//�Լ���һ���ȣ������жϸ�������С
/*
    ˫���ȸ�������ʾ������bit����λ��11bitָ��λ(�ý����ʾ)��52bitС������(β��)��
    ���һ����񻯵ĵ����ȸ�����x����ֵΪx=((-1)^S)(1.M)(2^(E-127))
    ��Ȼ��x��ԶҲ������Ϊ����0��
    ��������������������EΪȫ0��β��MҲȫ0ʱ��������Ϊ��ʾ����ֵxΪ������еľ���0ֵ,
    �ٽ�Ϸ���λS,����0�͸�0֮�֣� 
*/
/*
    x1��x2������������precision������ľ��ȡ�
    ������ fabs(x1-x2)<=precision���ж�x1��x2�Ƿ���ȡ�
    ���Ҫ����ߵľ��ȣ���precision���ø�С����
*/
using namespace std;
int main()
{
    double a,b,c,x1,x2,delta;
    cin>>a>>b>>c;
    delta=b*b-4*a*c;//�б�ʽ
    if(delta<0&&fabs(delta)>precision_1)//���б�ʽС�ڸ����ľ��ȷ�Χ�ڣ���delta<0ʱ����ʵ��
        printf("No answer!\n");
    else if(fabs(delta)<precision_1)//���б�ʽС�ڸ����ľ��ȵ�>0����ʱdelta��0
    {
        x1=-b/(2*a);
        if(fabs(x1)<precision_2) //������������С��Χ����ʱ����Ϊdelta=0��ֱ�����0
            printf("x1=x2=%.5lf\n",0);
        else//δ����������Χʱ���������С�����5λ��Ч�������ڣ�������
            printf("x1=x2=%.5lf\n",x1);
    }
    else//delta>0ʱ
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        if(fabs(x1)<precision_2)
            x1=fabs(x1);//С����������߾��ȣ�����ϵͳ��Ϊ-0�������ֵ
        if(fabs(x2)<precision_2)
            x2=fabs(x2);//С����������߾��ȣ�����ϵͳ��Ϊ-0�������ֵ
        if(x1<x2)//x1��x2��С������ǰ���
            printf("x1=%.5lf;x2=%.5lf",x1,x2);
        else
            printf("x1=%.5lf;x2=%.5lf",x2,x1);
    }
    return 0;
}

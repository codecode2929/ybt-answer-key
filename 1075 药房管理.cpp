#include<iostream>
using namespace std;
int main()
{
	int m,n,a,s = 0;
	cin>>m>>n;
	for(int i = 0;i<n;i++)
	{
		cin>>a;
		if(m-a>=0)				//�жϲ�����Ҫ�����������˵�ʱ�Ŀ����,��������,��������δȡҩ���˵����� 
			m -= a;
		else
			s++;						
	}
	cout<<s;	
}



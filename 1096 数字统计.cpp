#include<iostream>
using namespace std;
int main()
{
    int left,right,sum=0;
    int i,j;
 
    cin>>left>>right;
    for(i=left; i<=right; i++)
        for(j=i; j>0; j/=10) //�����λ
            if(j%10==2)	sum++;//����λΪ1��������+1
 
    cout<<sum<<endl;
    return 0;
}

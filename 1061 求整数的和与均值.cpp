#include<cstdio>
using namespace std;
 int main()
 {
     int n,i;
     int a,num=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         scanf("%d",&a);
         num+=a;
     }
     printf("%d %.5lf\n",num,(double)num/n);
     return 0;
 }


#include<cstdio>
using namespace std;
int n;
double x;
int main()
{
	scanf("%lf%d",&x,&n);
	for(int i=1;i<=n;i++)
	x*=(1+0.001);
	printf("%.4lf",x);
	return 0;
}


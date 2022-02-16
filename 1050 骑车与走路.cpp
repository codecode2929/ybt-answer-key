#include<cstdio>
using namespace std;
int a;
double b,c;
int main()
{
	scanf("%d",&a);
	b=a/3.0+50;
	c=a/1.2;
	if(b>c)
	printf("Walk");
	else
	if(b<c)
	printf("Bike");
	else
	printf("All");
	return 0;
}


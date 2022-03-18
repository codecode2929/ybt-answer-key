#include <cstdio>
using namespace std;
int main ()
{
	int a,b,c=1;
	scanf("%d %d",&a,&b);
	for(int i=1;i<=b;i++)
	{
		c*=a;
		c%=7;
	}
	switch(c)
	{
		case 1:printf("Monday");break;
		case 2:printf("Tuesday");break;
		case 3:printf("Wednesday");break;
		case 4:printf("Thursday");break;
		case 5:printf("Friday");break;
    	case 6:printf("Saturday");break;
		case 0:printf("Sunday");break;
	}
	return 0;
}


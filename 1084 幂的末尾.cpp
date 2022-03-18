#include <stdio.h>
int main ()
{
	int a,b,c=1;
	scanf("%d %d",&a,&b);
	for(int i=1;i<=b;i++)
	{
		c*=a;
		if(c>1000)
		{
			c%=1000;
		}
	}
	if(c<100) printf("%03d",c);
	else printf("%3d",c);
	return 0;
}


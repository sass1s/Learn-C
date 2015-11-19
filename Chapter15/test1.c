#include <stdio.h>


long long int my_fac(int n)
{
	long long int s=1;
	int i;
	for (i=1;i<=n;i++)
	{
		s=s*i;
	}
	return s;
}

void main(void)
{
	printf("%lld\n",1234567890ll*1234567890);
	int i;
	/*for (i=5;i<25;i++)	
		printf("%lld\n",my_fac(i));*/
	unsigned char c1=255,c2=2;
	char n=c1+c2;
	printf("%d\n",n);
	int c=3.14;
	printf("%f\n",(double)3+c);
	unsigned short s=65536;
	printf("%d\n",s);
}

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i=0;
	char s[200];
	unsigned int sum=0;
	for (;i<16;i++)
	{
		sum=sum+1u<<i;
		itoa(sum,s,2);
		printf("%s\n",s);
		printf("%d\n",sum);
	}
}

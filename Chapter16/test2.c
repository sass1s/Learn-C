#include <stdio.h>

void main(void)/*将一个十进制数打印成二进制数*/
{
	int i=1234,k=0,j;/*k用来计数*/
	i=i;
	int store[100];
	while (i/2!=0)
	{
		store[k]=i%2;
		i=i/2;
		k+=1;
	}
	store[k]=i%2;
	for (j=k;j>=0;j--)
		printf("%d",store[j]);
	putchar('\n');
}

#include <stdio.h>

void main(void)
{
	unsigned char c=0xfc;
	printf("%x\n",c);
	printf("%d\n",c);
	/*unsigned int i=~c;
	printf("%d\n",i);*/

	int i=0xcffffff3;
	printf("%d\n",i);
	printf("%x\n",i);
	printf("%x\n",0xcffffff3>>2);
	printf("%x\n",i>>2);
	printf("\n");

	unsigned int a,b,mask=0x0000ff00;
	a=0x12345678;
	b=(a&mask)>>8;
	printf("%x\n",b);
}

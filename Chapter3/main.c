
#include <stdio.h>

void foo(void)
{
	int i;
	printf("%d\n",i);
	i=777;
}

int main(void)
{
	foo();
	printf("hello,world!\n");
	foo();
	return 0;
}
	




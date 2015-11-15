#include <stdio.h>
#define n 30

int main(void)
{
	
	char abc[]="hello, world.\n";
	int i;
	abc[0]='A';
	/*"hello, world.\n"[0]='A';*/
	printf("%s",abc);
	
    return 0;
}

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define N 50

int a[N];

void gen_random(int upper_bound)
{
	int i;
	srand(time(NULL));
	for (i=0;i<N;i++)
		a[i]=rand()%upper_bound;
}

int howmany(int value)
{
	int count=0,i;
	for (i=0;i<N;i++)
		if (a[i]==value)
			count++;
	return count;
}

/*
void print_random()
{
	int i;
	for (i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
}*/

int main(void)
{
	int i,j;
	gen_random(10);
	printf("value\thow many\tsiginal\n");
	for (i=0;i<10;i++)
	{
		printf("%d\t%d\t\t",i,howmany(i));
		for (j=1;j<=howmany(i);j++)
			printf("%c",'*');
		printf("\n");
		
	}
		
	/*print_random();*/
	return 0;
}

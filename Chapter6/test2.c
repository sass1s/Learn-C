# include <stdio.h>
# include <math.h>

int is_prime(int n)
{
	int i=2;
	while (i<=sqrt(n))
	{
		if (n%i==0)
			break;
		i=i+1;
		/*printf("i的值为：%d\n",i);*/
	}
	if (i>sqrt(n) && n%2!=0)
		return 1;
	else 
		return 0;
}

int main(void)
{
	int i;
	printf("%d\n",2);
	for (i=2;i<10000000;i++)
	{
		if (!is_prime(i))
			continue;
		printf("%d\n",i);
	}
	return 0;	
}

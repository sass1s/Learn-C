# include <stdio.h>

int factorial(int n)
{
	int result=1;
	int i;
	for (i=1;i<=n;i++)
	{
		result=result*i;
		printf("the value of i is %d\n",i);	
	}
		

	/*printf("the value of i is %d\n",i);*/
	return result;
}

int count_9(int n)
{
	int count=0;
	while (n)
	{
		int ge=n%10;
		int shi=n/10%10;
		if (ge==9 && shi==9)
			count=count+2;
		if (ge==9 && shi!=9)
			count=count+1;
		if (ge!=9 && shi==9)
			count=count+1;
		n=n-1;
	}
	return count;
}

void main(void)
{
	int x=6;
	int y=factorial(x);
	printf("%d 的阶乘值为：%d\n",x,y);

	int n=20;
	printf("%d以内9出现的次数为%d次\n",n,count_9(n));



}

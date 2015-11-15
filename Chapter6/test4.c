/*利用字符画菱形*/
# include <stdio.h>


void diamond(int n,char a)
{
	if (n%2==0)
	{
		printf("错误：必须选择奇数行进行打印\n");
		return;
	}
	int k=(n+1)/2;
	int i,j,m;
	for (i=1;i<=k;i++)
	{
		for (m=1;m<=k-i;m++)
			printf(" ");
		for (j=1;j<=2*i-1;j++)
			printf("%c",a);
		printf("\n");
	}
	for (i=k-1;i>=1;i--)
	{
		for (m=1;m<=k-i;m++)
			printf(" ");
		for (j=1;j<=2*i-1;j++)
			printf("%c",a);
		printf("\n");
	}
}

void main(void)
{
	int n=114;
	diamond(n,'*');
}

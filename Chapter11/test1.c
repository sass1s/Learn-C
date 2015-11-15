# include <stdio.h>

# define LEN 10
int a[LEN]={10,5,2,4,7,34,3,24,324,2};

void insertion_sort(void)
{
	int i,j,key,k;
	for (j=1;j<=LEN;j++)
	{
		for (k=0;k<LEN;k++)
			printf("%d ",a[k]);
		printf("\n");
		key=a[j];
		i=j-1;
		while (i>=0 && a[i]>key)
		{
			a[i+1]=a[i];
			i--;		
		}
		a[i+1]=key;
	}

}


int main(void)
{
	insertion_sort();
	return 0;

}

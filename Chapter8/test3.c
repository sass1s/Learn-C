# include <stdio.h>

void print_day(int day)
{
	char days[8][10]={"","Monday","Tuesday",
				"Wednesday","Thursday","Friday",
				"Saturday","Sunday"};
	if (day>=1 && day<=7)
		printf("%s\n",days[day]);
	else
		printf("Illegal day number!\n");
}


int main(void)
{
	int i;
	for (i=1;i<=8;i++)
		print_day(i);
	return 0;
}

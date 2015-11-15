# include <stdio.h>
# include <math.h>

int is_leap_year(int year)
{
	if (year%400==0)
		return 1;	
	else if (year%4==0 && year%100!=0)
		return 1;	
	else
		return 0;	
}

int myround(double x)
{
	double y=(floor(x)+ceil(x))/2;
	if (x>0)
	{
		if (x<y)
			return floor(x);
		else
			return ceil(x);	
	}
	if (x<0)
	{
		if (x<=y)
			return floor(x);
		else
			return ceil(x);	
	}
}

double distance(double x1, double y1, double x2, double y2)
{
	double result=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	return result;
}

int factorial(int n)
{
	if (n==0)
		return 1;
	else
	{
		int recurse=factorial(n-1);
		int result=n*recurse;
		return result;
	}	
}

int fibonacci(int i)
{
	if (i==0 || i==1)
		return 1;
	else
	{
		int result=fibonacci(i-2)+fibonacci(i-1);
		return result;
	}
}

void main(void)
{
	int year=1984;
	if (is_leap_year(year))
		printf("%d is a leap year.\n",year);
	else
		printf("%d is not a leap year.\n",year);
	
	double r=distance(1.0,2.0,4.0,6.0);
	double S=M_PI*pow(r,2);
	printf("the area of a circle is %f\n",S);
	
	int x=5;
	int f=factorial(x);
	printf("The factorial value of %d is %d\n",x,f);
	
	int fib=fibonacci(x);
	printf("The fabonacci value of %d is %d\n",x,fib);
	printf("the value of pi is %f\n",M_PI);
}




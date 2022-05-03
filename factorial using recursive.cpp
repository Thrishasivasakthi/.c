#include<stdio.h>
int f(int n);
int main()
{
	int n ,fa;
	printf("enter the number whose factorial is needed:");
	scanf("%d",&n);
	fa=f(n);
	
	printf("factorial of %d is %d",n,fa);
	return 0;
	
}
int f(int n)
{
	if (n==0)
	{
		return 0;
	
	}
	else if (n==1)
	{
		return 1;
	}
	else
	{
		return n*f(n-1);
	}
}

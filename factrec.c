#include<stdio.h>
int fact(int n);
int f,n;
int main()
{
	printf("enter the number:");
	scanf("%d",&n);
	f=fact(n);
	printf("%d!=%d",n,f);
	return 0;
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else 
	{
		return n*fact(n-1);
	}
}

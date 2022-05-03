#include<stdio.h>
void sum(int x,int y);
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	sum(a,b);
	return 0;
}
void sum(int x,int y)
{
	int z;
	z=x+y;
	printf("sum is %d",z);
}

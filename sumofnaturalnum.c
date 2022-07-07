#include<stdio.h>
int main()
{
	int n,sum=0,i=1;
	printf("enter n value:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("\n 1+.....+%d= ",n);
	printf("%d",sum);
	getch();
}

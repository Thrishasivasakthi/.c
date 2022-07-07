#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n value:");
	scanf("%d",&n);
	printf("the numbers divisible by 2 not by 3 and not by5 till %d are:\n:",n);
	for(i=1;i<=n;i++)
	{
		if((i%2==0)&&(i%3!=0)&&(i%5!=0))
		{
			printf(" %d",i);
		}
	}
	return 0;
}

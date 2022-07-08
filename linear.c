#include<stdio.h>
int main()
{
	int i,flag=0,n,a[10],e;
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("enter the elements one by one:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key element:");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(e==a[i])
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag=1)
	{
		printf("search is successful");
	}
	else
	{
		printf("search is unsuccessful");
	}
	return 0;
}

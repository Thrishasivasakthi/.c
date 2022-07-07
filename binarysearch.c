#include<stdio.h>
int beg=0,end,loc,n,e,flag=0,ar[10],mid;
int main()
{	int i;
	printf("enter the no of elements:");
	scanf("%d",&n);
	for( i=0;i<=n;i++)
	{
		printf("enter elements:");
		scanf("%d",&ar[i]);
	}
	printf("element to be searched:");
	scanf("%d",&e);
	end=n-1;
	mid=beg+end/2;
	while(beg<=end&&e!=ar[mid])
	{
		mid=beg+end/2;
		if(e==ar[mid])
		{
			flag=1;
			printf("element located at %d",end+1);	
		}
		else if(e<ar[mid])
		{
			end=mid-1;
		}
		else
		{
			end=mid+1;
		}
		
	}
	if(flag==0)
	{
		printf("element not present");
	}
	getch();
}

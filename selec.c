#include<stdio.h>
void selection(int a1[],int n1);
int i,j,a[10],n,min,temp;
int main ()
{
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(a,n);
	return 0;
}
void selection(int a1[],int n1)
{
	for(i=0;i<n1-1;i++)
	{
		min=i;
		for(j=i+1;j<n1;j++)
		{
			if(a1[j]<a1[min])
			min=j;
		}
		temp=a1[min];
		a1[min]=a1[i];
		a1[i]=temp;
	}
	printf("sorted elements:");
	for(i=0;i<n1;i++)
	printf(" %d",a1[i]);
}

#include<stdio.h>
int n,i,j,a[10],temp;
void bubblesort(int a1[],int n1);
int main()
{
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter elements one by one:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	printf("sorted elements");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	return 0;
}
void bubblesort(int a1[],int n1)
{
	for(i=0;i<n1-1;i++)
	{
		for(j=0;j<n1-1;j++)
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}

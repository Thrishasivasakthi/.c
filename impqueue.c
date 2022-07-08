#include<stdio.h>
void insert();
void del();
void display();
int n=5,op,i,e,queue[10],front=0,rear=0;
int main ()

{
	while(1)
	{
		printf("enter operation (1-4):");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				insert();
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
		}
		
	}return 0;
}
void insert()
{
	printf("enter the element:");
	scanf("%d",&e);
	if(front>=n)
	{
		printf("\nqueue is full\n");
		
	}
	else
	{
		front=front+1;
		queue[front]=e;
	}
}
void del()
{
	if(rear>=n)
	{
		printf("\nqueue is empty\n");
		
	}
	else
	{
		rear=rear+1;
		printf("%d",queue[rear]);
	}
}
void display()
{
	for(i=rear+1;i<=front;i++)
	{
		printf(" %d",queue[i]);
	}
}

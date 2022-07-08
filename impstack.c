#include<stdio.h>
void push();
void pop();
void display();
int n=5,op,i,e,stack[10],top=0;
int main()
{	while(1)
{

	printf("enter operation(1 to 4):");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(1);
			break;
	}
}
	return 0;
}
void push()
{
	printf("enter element:");
	scanf("%d",&e);
	if(top>=n)
	{
		printf("\nstack is full\n");
	}
	else
	{
		top=top+1;
		stack[top]=e;
	}
}
void pop()
{
	if(top<=0)
	{
		printf("\nstack is empty\n");
	}
	else
	{
		printf("%d",stack[top]);
		top=top-1;
	}
}
void display()
{
	for(i=top;i>0;i--)
	{
		printf(" %d",stack[i]);
	}
}

#include<stdio.h>
int swap(int a,int b);
int swap11(int *a,int *b);
int a,b,t;
int main()
{	int x,y;
	printf("enter two numbers:");
	scanf("%d %d",&x,&y);
	printf("call by value\n*************");
	printf("\nbefore swap-main fun A=%d and B=%d",x,y);
	swap(x,y);
	printf("\nafter swap-main fun A=%d andB=%d",x,y);
	printf("\ncall by reference\n***********");
	printf("\nbefore swap-main fun A=%d and B=%d",x,y);
	swap1(&x,&y);
	printf("\nafter swap-main fun A=%d and B=%d",x,y);
	return 0;
	
}
int swap(int a,int b)
{
	t=a;
	a=b;
	b=t;
	printf("\nafterswap-insidefun A=%d and B=%d",a,b);
}
int swap1(int *a,int *b)
{
	t=*a;
	*a=*b;
	*b=t;
	printf("\nafterswap -insidefun A=%d and B=%d",*a,*b);
}

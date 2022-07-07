#include<stdio.h>
int main()
{
	int op;
	printf("enter day numbers starts from 0:");
	scanf("%d",&op);
	switch (op)
	{
		case 0:
			printf("\n sunday");
			break;
		case 1:
			printf("\n monday");
			break;
		case 2:
			printf("\n tuesday");
			break;
		case 3:
			printf("\n wednesday");
			break;
		case 4:
			printf("\n thursday");
			break;
		case 5:
			printf("\n friday");
			break;
		case 6:
			printf("\n saturday");
			break;
		default:
			printf("invalid number");
			break;
	}
	return 0;
}

#include<stdio.h>
struct stu
{
	int rollnum,s1,s2,tot;
	char name[10];
	float avg;
}s[10];
int main()
{
	int i,n;
	printf("enter the number of student");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the name :");
		scanf("%s",&s[i].name);
		printf("enter the roolnumber:");
		scanf("%d",&s[i].rollnum);
		printf("enter 2 subjects mark:");
		scanf("%d %d",&s[i].s1,&s[i].s2);
		s[i].tot=s[i].s1+s[i].s2;
		s[i].avg=s[i].tot/2.0;
	}
	printf("\nrollnum.name\t\sub1\tsub2\ttotal\taverage\n\n");
	for(i=0;i<n;i++)
	{
	printf("%d\t%s\t\%d\t%d\t%d\t%.2f\n",s[i].rollnum,s[i].name,s[i].s1,s[i].s2,s[i].tot,s[i].avg);
	}
return 0;
}

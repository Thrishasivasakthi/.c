#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf("enter the string:");
	scanf("%s",&str1[10]);
	strcpy(str2,str1);
	strrev(str2);
	if(!strcmp(str2,str1))
	{
		printf("it is palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
	return 0;
}

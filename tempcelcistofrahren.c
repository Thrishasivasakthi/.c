#include<stdio.h>
int main()
{
	float f,c;
	printf("enter temperature in celsius");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("fahrenheit temperature is %f",f);
	printf("\nenter temperature in fahrenheit");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("celsius temperature is %f",c);
	return 0;
}

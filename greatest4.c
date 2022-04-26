#include<stdio.h>
int main(void)
{
  int a,b,c,d;
  printf("enter four numbers:");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(a>b && a>c)
  {
    if(a>d)
    {
      printf("%d is the greatest number",a);
    }
  }
  if(b>c && b>d)
  {
    if(b>a)
    {
      printf("%d is the greatest number",b);
    }
  }
  if(c>d && c>b)
  {
    if(c>a)
    {
      printf("%d is the greatest number",c);
    }
  }
  if(d>a && d>b)
  {
    if(d>c)
    {
      printf("%d is the greatest number",d);
    }
  }
  return 0;
}

#include<stdio.h>
int main()
{
  int mark;
  printf("enter the mark:");
  scanf("%d",&mark);
  if(mark>90)
  {
    printf(" grade 0");
  
  }
  else if (mark>80 && mark<=90)
  {
    printf("grade A");
  }
  else if(mark>70 && mark<=80)
  {
    printf(" grade B");
  }
  else if(mark>60 && mark<=70)
  {
    printf("grade C");
  }
  else if(mark>50 && mark<=60)
  {
    printf("grade D");
  }
  else
  {
    printf("better luck next time");
  }
  return 0;
}

#include <stdio.h>
#include<conio.h>

int main()
{
  int Num,i;
  
  printf("Enter Number to Generate the table in C=");
  scanf("%d",&Num);
  
  printf("Table of %d",Num);
  
  for(i=1;i<=10;i++)
  {
    printf("\n %d*%d=%d",Num,i,(Num*i));
  }
  
   getch();
  return 0;
}

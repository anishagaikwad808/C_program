#include <stdio.h>
#include<conio.h>

int main()
{
  int Num=0,i=1;
  
  printf("Enter Number to Generate the table in C=");
  scanf("%d",&Num);
  
  printf("Table of %d",Num);
  
  while(i<=10)
  {
    printf("\n %d*%d=%d",Num,i,(Num*i));
    i++;
  }
  
   getch();
  return 0;
}

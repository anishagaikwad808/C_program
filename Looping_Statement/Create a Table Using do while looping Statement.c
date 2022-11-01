#include <stdio.h>
#include<conio.h>

int main()
{
  int Num,i=1;
  
  printf("Enter Number to Generate the table in C=");
  scanf("%d",&Num);
  
  printf("Table of %d",Num);
  
  do
  {
    printf("\n %d*%d=%d",Num,i,(Num*i));
    
    i++;
  } while(i<=10);
  
   getch();
  return 0;
}

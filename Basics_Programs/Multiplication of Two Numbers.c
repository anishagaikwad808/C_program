#include <stdio.h>
#include<conio.h>

int main()
{
   int Number1,Number2, Multiple;
   
  printf("Enter a two Numbers:");
  scanf ("%d%d",&Number1,&Number2);
  
  Multiple=Number1*Number2;
  printf("Addition of %d*%d=%d",Number1,Number2, Multiple);
  
  getch();
  return 0;
}
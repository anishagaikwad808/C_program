#include <stdio.h>
#include<conio.h>

int main()
{
   int Number1,Number2;
   int Division;
   
  printf("Enter a two Numbers:");
  scanf ("%d%d",&Number1,&Number2);
  
  Division=Number1/Number2;
  printf("Division of %d/%d=%d",Number1,Number2, Division);
  
  getch();
  return 0;
}
#include <stdio.h>
#include<conio.h>

int main()
{
   int Number1,Number2,Sub;
   
  printf("Enter a two Numbers:");
  scanf ("%d%d",&Number1,&Number2);
  
  Sub=Number1-Number2;
  printf("Subtraction of %d+%d=%d",Number1,Number2,Sub);
  
  getch();
  return 0;
}

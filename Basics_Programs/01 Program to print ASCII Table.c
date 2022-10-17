#include <stdio.h>
#include<conio.h>

int main()
{
   int Val=0;
   
  printf("\n ENTER THE ASCII TABLE :\n");
  
   for(Val=0;Val<128;Val++)
   {
     printf("\n The ASCII Value of %c is %d",Val,Val);
   }
 
  getch();
  return 0;
}
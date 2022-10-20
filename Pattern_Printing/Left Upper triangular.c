#include <stdio.h>
#include<conio.h>

int main()
{
  int C=0,R=0;
  
  printf("Enter a Pattern=\n");
  
   for(R=5;R>=1;R--)
   {
     for(C=1;C<=R;C++)
     {
         printf(" * ");
      }
     printf("\n");
   }
   
   getch();
  return 0;
}
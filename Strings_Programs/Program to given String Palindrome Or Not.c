#include <stdio.h>
#include<conio.h>


int main()
{
   char cSrc[50]={'\0'};
   int i=0,j=0;
   
  puts("\n Enter a String=");
  gets(cSrc);
  
  while(cSrc[i]!='\0')
  {
    i++;
  }
   i--;
   while(i>j)
   {
     (cSrc[i]!=cSrc[j]);
     {
       break;
     }
     i--;
     j++;
   }
    if(i<=j)
    
      printf("\n Given String %s is Palindrome",cSrc);
    
    else
   
   printf("\n Given String %s is Not Palindrome",cSrc);
   
   
  getch();
  return 0;
}
/* Print ASCII table */

#include <stdio.h>
int main()
{
  int count;
  
  printf(" \n ASCII TABLE \n");
  
  for(count=0;count<128;count++)
  
  printf("The ASCII code of the character %c is %d \n",count,count);
  
  getch();
  return 0;
}
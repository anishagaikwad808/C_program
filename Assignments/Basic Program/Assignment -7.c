/* Program to find out ASCII value of given character */
#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a Character:");
  scanf("%c",&ch);
  
  printf("ASCII value of %c= %d",ch,ch);
  
  getch();
  return 0;
}
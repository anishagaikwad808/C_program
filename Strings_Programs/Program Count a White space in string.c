#include <stdio.h>
int main()
{
  int i= 0, count = 0;
  char s[1000];

  printf("Input a string\n");
  gets(s);

  while (s[i]!= '\0')
  {
    if (s[i]==' ')
    {
      count++;
    }
     i++;
  }

  printf("Number of white space in the string: %d", count);

  return 0;
}
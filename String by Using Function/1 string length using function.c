#include <stdio.h>
#include<conio.h>

int strlenX(char[]);

int main()
{
   char cSrc[20]={'\0'};
   int len=0;
   
  puts("\n Enter A String:");
  gets(cSrc);
  
  len=strlenX(cSrc);
  
  printf("\n Length of given string is=%d",len);
  return 0;
}
int strlenX(char cArr[])
{
  int Cnt=0;
  printf("\n Size=%d \n",sizeof(cArr));
  
  while(cArr[Cnt]!='\0')
  {
    Cnt++;
  }
  return Cnt;
}
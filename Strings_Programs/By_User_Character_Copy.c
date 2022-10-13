#include<stdio.h>

int main()
{
    char csrc[50]={'\0'},cdet[50]={'\0'};
    int i=0;
    
    puts("\n enter a string=");
    gets(csrc);
    
    while(csrc[i]!='\0')
    {
      if(csrc[i]!='\0')
    {
      cdet[i]=csrc[i];
    }
    
     i++;
    }
    printf("copy case string is=%s",csrc);
    
    return 0; 
 }   
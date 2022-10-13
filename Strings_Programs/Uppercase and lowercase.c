#include<stdio.h>

int main()
{
    char csrc[50]={'\0'};
    int i=0;
    
    puts("\n enter a string=");
    gets(csrc);
    
    while(csrc[i]!='\0')
    {
      if(csrc[i]>='A'&&csrc[i]<='Z')
    {
      csrc[i]=csrc[i]+32;
    }
     else if(csrc[i]>='a'&&csrc[i]<='z')
    {
      csrc[i]=csrc[i]-32;
    }
    
     i++;
      }
    printf("lower case string is=%s",csrc);
    
    return 0; 
 }   
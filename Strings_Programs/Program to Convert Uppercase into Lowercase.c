#include<stdio.h>

int main()
{
    char csrc[50]={'\0'};
    int i=0;
    
    puts("\n Enter a string=");
    gets(csrc);
    
    while(csrc[i]!='\0')
    {
      if(csrc[i]>='A'&&csrc[i]<='Z')
     {
       csrc[i]=csrc[i]+32;
     }
     i++;
    }

    printf("Lowercase string is=%s",csrc);
    
    getch();
    return 0; 
 }   

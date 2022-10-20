#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50]={'\0'},cDet[50]={'\0'};
    int i=0;
    
    puts("\n Enter a string=");
    gets(cSrc);
    
    while(cSrc[i]!='\0')
    {
      if(cSrc[i]!='\0')
     {
       cDet[i]=cSrc[i];
     }
    
     i++;
    }
    printf("Copycase string is=%s",cSrc);
    
    getch();
    return 0; 
 }   

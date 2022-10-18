#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,dSum=0,Temp=0,Dig=0;
    
    Up:
    printf("\n Enter positive Integer Number To Calculate it's Sum Number=");
    scanf("%d",&No);
    Temp=No;
      
     if(No<0)
     {
       printf("\n Invalid Input....");
       goto Up;
     }
    
     while(Temp>0)
     {
       Dig=Temp%10;
       dSum=dSum+Dig;
       Temp=Temp/10;
     }
     printf("\n Sum of digits in given Number %d is=%d.",No,dSum);
    
     getch();
     return 0;
}
#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,dCnt=0,Temp=0;
    
    Up:
    printf("\n Enter positive Integer Number To Calculate it's digit Number=");
    scanf("%d",&No);
    Temp=No;
      
     if(No<0)
     {
       printf("\n Invalid Input....");
       goto Up;
     }
    
     while(Temp>0)
     {
       dCnt++;
       Temp=Temp/10;
     }
     printf("\n No of digits in given Number %d is=%d.",No,dCnt);
    
     getch();
     return 0;
}
#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,O_Cnt=0,Temp=0;
    
    printf("\n Enter positive Integer Number=");
    scanf("%d",&No);
    Temp=No;
  
    while(Temp>0)
    {
       Dig=Temp%10;
       
         if(Dig%2==1)
         {
           O_Cnt++;
         }
         
       Temp=Temp/10;
    }
    
    printf("\n Odd of digits in given Number %d is=%d",No,O_Cnt);
    
     getch();
     return 0;
}
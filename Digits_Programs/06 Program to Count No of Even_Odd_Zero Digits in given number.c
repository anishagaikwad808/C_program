#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,E_Cnt=0,O_Cnt=0,Z_Cnt=0,Temp=0;
    
    printf("\n Enter positive Integer Number=");
    scanf("%d",&No);
    Temp=No;
  
    while(Temp>0)
    {
       Dig=Temp%10;
       
         if(Dig!=0 && Dig%2==0)
         {
            E_Cnt++;
         }
         else if(Dig==0)
         {
           Z_Cnt++;
         }
         else if(Dig%2==1)
         {
           O_Cnt++;
         }
         
       Temp=Temp/10;
    }
    
    printf("\n Even of digits in given Number %d is=%d",No,E_Cnt);
    printf("\n Odd of digits in given Number %d is=%d",No,O_Cnt);
    printf("\n Zero of digits in given Number %d is=%d",No,Z_Cnt);
   
     getch();
     return 0;
}
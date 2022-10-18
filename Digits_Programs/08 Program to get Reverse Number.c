#include<stdio.h>
#include<conio.h>

int main()
{
   int Num=0,Temp=0,Rem=0,Rev=0;
      
    printf("\n Enter a Possitive Number:");
    scanf("%d",&Num);
    Temp=Num;
    
   if(Num>0)
   {
     while(Temp>0)
      {
       Rem=Temp%10;
       Rev=Rev*10+Rem;
       Temp=Temp/10;
      }
    }
     else
    {
      while(Temp<0)
      {
        Rem=Temp%10;
        Rev=Rev*10+Rem;
        Temp=Temp/10;      
      }
    }
    
    printf("Reverse Number is %d.",Rev);
    
     getch();
     return 0;
}
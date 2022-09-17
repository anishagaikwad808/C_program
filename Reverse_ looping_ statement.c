#include<stdio.h>

int main()
{
   int Num,Temp,Rem,Rev;
      
    printf("\n Enter a Integer:");
    scanf("%d",&Num);
    Temp=Num;
    if(Num>0)
    while(Temp>0)
    {
     Rem=Temp%10;
     Rev=Rev*10+Rem;
     Temp=Temp/10;
    }
    else
    while(Temp<0)
    {
     Rem=Temp%10;
     Rev=Rev*10+Rem;
     Temp=Temp/10;
    }
    
   printf("Reverse Number %d is %d",Num,Rev);
  return 0;
}
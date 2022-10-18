#include<stdio.h>
#include<conio.h>

int main()
{
   int Num=0,Temp=0,Rem=0,Rev=0;
      
    printf("\n Enter a Possitive Number:");
    scanf("%d",&Num);
    Temp=Num;
    
    while(Num>0)
    {
     Rem=Num%10;
     Rev=Rev*10+Rem;
     Num=Num/10;
    }
      if(Temp==Rev)
      printf(" Given Number is Palindrome.");
      else
      printf(" Given Number is not Palindrome."); 
  
       getch();
       return 0;      
}
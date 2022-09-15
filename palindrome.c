#include<stdio.h>

int main()
{
   int Num,Temp,Rem,Rev=0;
      
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
    printf(" Number is Palindrome");
   else
    printf(" Number is not Palindrome"); 
       return 0;
}
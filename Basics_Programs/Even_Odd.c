#include<stdio.h>

int main()
{
   int Num;
   printf("Enter any number=");
   scanf("%d",&Num);
   if(Num%2==0)
    {
     printf("\n %d is Even Number.",Num);
    }
     else
    {
     printf("\n %d is Odd Number.",Num);
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int Num=0, i=0;
     printf("Enter a number to genarate the table in c:");
     scanf("%d",&Num);
    printf("\n Table of %d", Num);
    for(i=1;i<=10;i++)
    {
      printf("\n %d*%d=%d",Num,i,(Num*i));
    }
    return 0;
}
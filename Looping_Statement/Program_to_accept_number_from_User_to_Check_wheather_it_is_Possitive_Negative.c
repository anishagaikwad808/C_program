#include<stdio.h>

int main()
{
    int No;
    printf("\n Enter Number=");
    scanf("%d",&No);
    
    if(No==0)
    {
     printf("\n Zero number is Neutral");
    }
    else if(No>0)
    {
     printf("\n Number is Possitive %d",No);
    }
    else
    {
     printf(" Number is Negative %d",No);
    }
     printf("\n Thanks!!\n");
    return 0;
}
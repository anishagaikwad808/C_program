#include<stdio.h>

int main()
{
    int No=0,dCnt=0,Temp=0;
    printf("\n Enter positive Integer Number To Calculate it's digit Number=");
    scanf("%d",&No);
    Temp=No;
    while(Temp>0)
    {
       dCnt++;
       Temp=Temp/10;
    }
    printf("\n No of digits in given Number %d is=%d",No,dCnt);
     return 0;
}
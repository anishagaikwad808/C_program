#include<stdio.h>

int main()
{
    int C=0,R=0,rCnt;
    printf("Enter a Pattern by Odd Number=\n");
    scanf("%d",&rCnt);
    
    for(R=1;R<=rCnt;R++)
    {
     for(C=1;C<=rCnt;C++)
     {
      if(R==1||rCnt==R||C==rCnt/2+1)
      printf(" * ");
      else
     printf("   ");
     }
      printf("\n");
    }
    return 0;
}
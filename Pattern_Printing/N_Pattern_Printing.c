#include<stdio.h>

int main()
{
    int C=0,R=0,rCnt;
    printf("Enter a Pattern=\n");
    scanf("%d",&rCnt);
    
    for(R=1;R<=rCnt;R++)
    {
     for(C=1;C<=rCnt;C++)
     {
      if(C==1||R==C||rCnt==C)
      printf(" * ");
      else
     printf("   ");
     }
      printf("\n");
    }
    return 0;
}
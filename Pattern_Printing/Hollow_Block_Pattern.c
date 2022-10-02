#include<stdio.h>

int main()
{
    int C=0,R=0;
    printf("Enter a Pattern=\n");
    
    for(R=1;R<=4;R++)
    {
     for(C=1;C<=5;C++)
    {
      if(R==1||C==1||R==4||C==5)
      printf(" * ");
      else
     printf("   ");
    }
      printf("\n");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int C=0,R=0;
    printf("Enter a Pattern=\n");
    
    for(R=1;R<=5;R++)
    {
     for(C=1;C<=4;C++)
    {
      printf("*");
    }
      printf("\n");
    }
    return 0;
}
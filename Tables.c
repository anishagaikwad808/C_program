#include<stdio.h>

int main()
{
    int R,C,sNum,eNum;
    printf("Enter starting number:");
    scanf("%d",&sNum);
    printf("Enter ending number:");
    scanf("%d",&eNum);
    if(sNum>=eNum)
    for(R=1;R<=10;R++)
    {
     for(C=sNum;C>=eNum;C--)
    {
      printf("%4d",C*R);
    }
     printf("\n");
    }
    else  
    for(R=1;R<=10;R++)
    {   
      for(C=sNum;C<=eNum;C++)
      {
         printf("%4d",C*R);
      }
      printf("\n");
     }
   
    printf("\nThanks!!!");
    return 0;
}
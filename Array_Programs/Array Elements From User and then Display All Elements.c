#include<stdio.h>

int main()
{
    int i=0,j=0,Values[8]={0};
    
    for(i=0,j=1;i<8;i++,j++)
    {
     printf("Enter elements no %d=",j);
     scanf("%d",&Values[i]);
    }
   
     printf("\n\n Elements in Array are=\n\n");
     
    for(i=0,j=101;i<8;i++,j++)
    {
      printf("\n Value of %d Element=%d",j,Values[i]);
    }
    
    getch();
    return 0;
}
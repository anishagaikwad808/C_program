#include<stdio.h>

int main()
{
    int Count=0,N1=1,N2=0,N3=0;
    
    up:
    printf("\n Enter a positive integer number=");
    scanf("%d",&Count);
    
    if(Count<=0)
    {
     printf("\n Only possitive value required.\n");
     goto up;
     }
    printf("\n Fibonacci series is=");
   
    while(Count>0)
    {
     printf("%d",N3);
    N3=N1+N2;
    
     N1=N2;
     N2=N3;
     Count--;
    }
    printf("\n\nThanks");
    
   return 0;
}
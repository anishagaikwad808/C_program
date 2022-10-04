#include<stdio.h>

int main()
{
   int Num;
    printf("Enter a Integer=");
    scanf("%d",&Num);
    
    (Num%2==0)?
    printf("The Integer is Even %d",Num): printf("The Integer is Odd %d",Num);
    
    return 0;
}
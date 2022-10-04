#include<stdio.h>

int main()
{
   int Num;
    printf("Enter a Integer=");
    scanf("%d",&Num);
    
    (Num>0)?
    printf("The Integer is Possitive %d",Num): printf("The Integer is Negative %d",Num);
    
    return 0;
}
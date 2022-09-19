#include<stdio.h>

int main()
{    
    int Max,Min,Num;
    printf("Enter two numbers\n");
    scanf("%d%d",&Max,&Min);
     (Max>Min)?(Num=Max):(Num=Min);
    printf("In these two numbers Maximum Number is=%d \n",Num);
    return 0;
}
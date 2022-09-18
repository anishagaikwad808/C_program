#include<stdio.h>

int main()
{    
    int val;
    printf("\n Ascii table:\n");
    
    for(val=0;val<127;val++)
    printf("\n\a  Ascii value %d in %c",val,val);
    
    return 0;
}
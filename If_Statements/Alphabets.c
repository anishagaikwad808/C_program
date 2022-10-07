#include<stdio.h>

int main()
{    
    char ch;
     printf("Lower and Uppercase alphabet=");
     scanf("%c",&ch);
    if(ch>='A' && ch<='Z') 
    {  
    printf("Uppercase Alphabet %c.",ch);
    }
  else if(ch>='a' && ch<='z') 
    {
    printf("Lowercase Alphabet %c.",ch);
    }
    else
    {
    printf(" There is no Alphabet %c.",ch);
    }
    return 0;
}
    
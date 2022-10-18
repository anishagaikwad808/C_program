#include <stdio.h>
#include<conio.h>

int main()
{
  int First_No=0,Second_No=0,Temp=0;
 
  printf("Enter First Number:");
  scanf ("%d",&First_No);
  printf("Enter Second Number:");
  scanf("%d",&Second_No);
  
  // swapping
  Temp=First_No;
  First_No=Second_No;
  Second_No=Temp;
  
  
  printf("\nAfter swapping,First Number=%d\n",First_No);
  printf("After swapping,Second Number=%d\n",Second_No);
  
  getch();
  return 0;
}

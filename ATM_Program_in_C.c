#include<stdio.h>
int main()
{
 float x,y;
 char ch;

 printf("Enter initial amount=");
 scanf("%f",&x);
  printf("Enter\nc for credit\nd for debit\nb for balance\n");
  scanf("\n%c",&ch);
  
 switch(ch)
  {
  case'c':
  printf("Enter creadit amount=");
  scanf("%f",&y);
  x=x+y;
  printf("New amount=%f",x);
  break;
  case'd':
  printf("Enter debit amount=");
  scanf("%f",&y);
  if(x>=y)
 {
  x=x-y;
  printf("New amount=%f",x);
  }
  else
  {
  printf("insufficient amount in your account");
 }
  break;
 case'b':
printf("Amount in your account=%f",x);
 break;
  default:
  printf("chosse option of Operation");

}

}

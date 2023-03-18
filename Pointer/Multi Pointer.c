#include <stdio.h>
#include<conio.h>

int main()
{
   int No=50;
   int *p = &No;
   int **q=&p;
   int ***m=&q;
   int ****x=&m;
   int *****r=&x;
   
  printf("\n No=%d",&No);
  printf("\n p=%d",&p);
  printf("\n q=%d",&q);
  printf("\n m=%d",&m);
  printf("\n x=%d",&x);
  printf("\n r=%d",&r);
  printf("\n===============\n\n");
  getch();
  
  printf("\n %d",No);         //50
  printf("\n %d",&No);       //2066536524
  printf("\n %d",&p);        //2066536524
  printf("\n %d",*p);       //50
  printf("\n %d",**r);      //2066536524
  printf("\n %d",**(&m));    //2066536524
  printf("\n %d",&(***x));   //2066536524
  printf("\n %d",****r);    //2066536524
  
  getch(); 
  
  return 0;
}
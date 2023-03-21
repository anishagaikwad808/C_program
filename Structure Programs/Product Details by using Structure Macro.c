#include <stdio.h>
#include<conio.h>

#define Pcount 1

struct Product
{
  int P_id;
  char P_name[40];
  float P_P_price;
  float P_S_price;
};

int main()
{
  int i=0;
  struct Product Prod[Pcount];
  printf("\n ========Accept Product Details=========\n");
   for(i=0;i<=Pcount;i++)
 { 
  printf("Product id=");
  scanf("%d",&Prod[i].P_id);
  
  printf("\n Enter Product Name=");
  scanf(" %[^\n]",&Prod[i].P_name);
  fflush(stdin);
  
  printf("\n Enter Product Purchase Price=");
  scanf("%f",&Prod[i].P_P_price);
  
  printf("\n Enter Product Selling Price=");
  scanf("%f",&Prod[i].P_S_price); 
}
 
 printf("=========********=========\n");
 

  for(i=0;i<=Pcount;i++)
 { 
     printf("\n %d Product Details=",i+1);
     
 printf("\n ID=%d",Prod[i].P_id);
 printf("\n Product Name=%s",Prod[i].P_name);
 printf("\n Purchase Price=%f",Prod[i].P_P_price);
 printf("\n Selling Price=%f",Prod[i].P_S_price);
 }
 printf("\n========******==========");
 

  return 0;
}
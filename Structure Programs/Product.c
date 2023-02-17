#include <stdio.h>
#include<conio.h>
#include<string.h>

struct product
{
  int P_id;
  char Name[40];
  float S_price;
  float P_price;
};
int main()
{
  struct product obj1,obj2;
  
  obj1.P_id=10;
  strcpy(obj1.Name,"LCD TV");
  obj1.P_price=1200;
  obj1.S_price=1400;
  
  printf("Enter Product of ID:");
  scanf("%d",&obj2.P_id);
  
  printf("Enter Product Name:");
  scanf(" %[^\n]",&obj2.Name);
  
  printf("Enter Product Purchase Price:");
  scanf("%f",&obj2.P_price);
  
  printf("Enter Product Selling Price:");
  scanf("%f",&obj2.S_price);
  
  printf("=========Product Details==========");

  printf("\n\n\t Product id=%d \n Product Name= %s \n Product Purchase Price=%f \n Product Selling Price=%f",obj1.P_id,obj1.Name,obj1.P_price,obj1.S_price);
  printf("\n\n\t Product id=%d \n Product Name= %s \n Product Purchase Price=%f \n Product Selling Price=%f",obj2.P_id,obj2.Name,obj2.P_price,obj2.S_price);
  
  getch();
  return 0;
}
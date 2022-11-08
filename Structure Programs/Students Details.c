#include <stdio.h>
#include<conio.h>
#include <string.h>

struct student
{
  int RollNo;
  char Name[18];
  char City[8];
  float Per;
};

int main()
{
  struct student std1,std2;
  
  std1.RollNo=34;
  strcpy(std1.Name,"Ankush Chaudhary");
  strcpy(std1.City,"Pune");
  std1.Per=77.20;
  
  printf("\n Enter Roll No:");
  scanf("%d",&std2.RollNo);
  
  printf("\n Enter Name:");
  scanf(" %[^\n]",&std2.Name);
  fflush(stdin);
  
  printf("\n Enter City:");
  scanf(" %[^\n]",&std2.City);
  fflush(stdin);
  
  printf("\n Enter Percentage:");
  scanf("%f",&std2.Per);
   
  
  printf("\n 1st student Details Given are=>\n\n\tRoll No-%d. \n\tName-%s.\n\t City-%s.\n\t Percentage-%f.\n" ,std1.RollNo,std1.Name,std1.City,std1.Per);
  printf("\n 2nd student Details Given are=>\n\n\tRoll No-%d. \n\tName-%s.\n\t City-%s.\n\t Percentage-%f.\n" ,std2.RollNo,std2.Name,std2.City,std2.Per);

 getch();
 return 0;
 }

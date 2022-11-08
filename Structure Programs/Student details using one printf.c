#include <stdio.h>
#include<conio.h>

struct Student
{
  int Stdid;
  char Name[15];
  char City[8];
  float Per;
};

int main()
{
  struct Student std1;
    std1.Stdid=34;
  strcpy(std1.Name,"Ankush Chaudhary");
  strcpy(std1.City,"Pune");
  std1.Per=77.20;

  printf("\n==========Student Details=======\n\n Enter Student id=%d \nEnter Student Name=%s \nEnter Student City=%s \nEnter Student Percentage=%f",std1.Stdid,std1.Name,std1.City,std1.Per);
  return 0;
}
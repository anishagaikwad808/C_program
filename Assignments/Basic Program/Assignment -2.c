#include <stdio.h>

int main()
{
  char std_name[10];
  int  roll_no;
  char course[10];
  char city[8];
  
  printf("Student Name :");
  scanf("%s",&std_name);
  
  printf("Student Roll No :");
  scanf("%d",&roll_no);
  
  printf("Student Course Name :");
  scanf("%s",&course);
  
  printf("Student City Name :");
  scanf("%s",&city);
    
  getch();
  return 0;
}
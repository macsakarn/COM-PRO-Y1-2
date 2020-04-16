#include <stdio.h>
#include <string.h>

int main(){
  int loop;
  scanf("%d", &loop); //รับค่า array ใน srruct

  struct Record {
      char id[10];
      char name[100];
      long salary;
      long sales;
  }Record[loop];

  for (int i = 0; i < loop; ++i) //รับค่าในตาราง
  {
    scanf("%s", &Record[i].id);
    scanf("%s", &Record[i].name);
    scanf("%ld", &Record[i].salary);
    scanf("%ld", &Record[i].sales);
  }

  char prass[10]; //รับรหัสพนักงาน
  scanf("%s", &prass);

  int not = 0; //chack error

  for (int j = 0; j < loop; ++j)
  {
    if (strcmp(prass, Record[j].id) == 0)
    {
      printf("%s\n", Record[j].id);
      printf("%s\n", Record[j].name);
      printf("%ld\n", Record[j].sales);
      float ans1 = Record[j].sales * 0.02;
      printf("%.2f\n", ans1);
      printf("%ld\n", Record[j].salary);
      float ans2 = Record[j].salary + ans1;
      printf("%.2f\n", ans2);
      not = 1;
    }
  }


  if (not == 0) //print error
  {
    printf("ID not found !!!");
  }

  return 0;
}
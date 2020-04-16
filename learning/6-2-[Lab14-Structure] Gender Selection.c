#include <stdio.h>
#include <string.h>

int main(){
  int loop;
  scanf("%d", &loop); //รับค่า array ใน srruct

  struct Person { //ตาราง
    char firstName[100];
    char lastName[100];
    int age;
    char gender[7];
  } Person[loop];

  for (int i = 0; i < loop; ++i) //รับค่าในตาราง
  {
    scanf("%s", &Person[i].firstName);
    scanf("%s", &Person[i].lastName);
    scanf("%d", &Person[i].age);
    scanf("%s", &Person[i].gender);
  }

  char sex[7]; //รับเพศ
  scanf("%s", &sex);

  int not = 0; //chack error

  for (int j = 0; j < loop; ++j) //chack sex 
  {
    if (strcmp(sex, Person[j].gender) == 0)
    {
      printf("%s %s %d %s\n", Person[j].firstName, Person[j].lastName, Person[j].age, Person[j].gender);
      not = 1;
    }
  }

  if (not == 0) //print error
  {
    printf("error");
  }

  return 0;
}
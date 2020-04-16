#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{

  struct studen{
    char first_n[100];
    char lest_n[100];
    char sex[7];
    int old;
    char id[10];
    float gpa;
  } studen[21];

  for (int i=0; i<20; ++i){
    scanf("%s", &studen[i].first_n);
    scanf("%s", &studen[i].lest_n);
    scanf("%s", &studen[i].sex);
    scanf("%d", &studen[i].old);
    scanf("%s", &studen[i].id);
    scanf("%f", &studen[i].gpa);
  }

  char slect[10];
  scanf("%s", &slect);
  int len = strlen(slect);

  for (int i=0; i<len; ++i){
    slect[i]=tolower(slect[i]);
  }

  if (strcmp(slect,"name")==0){
    for (int i=0; i<20; ++i){
      for (int j=0 ;j<20; ++j){
      studen[20] = studen[j];
      if (strcmp(studen[j].first_n,studen[j+1].first_n)>0){
        studen[j] = studen[j+1];
        studen[j+1] = studen[20];
      }
    }
    }
  }
  else if (strcmp(slect,"surname")==0)
  {
    for (int i=0; i<20; ++i)
    {
      for (int j=0; j<20; ++j)
      {
      studen[20] = studen[j];
      if (strcmp(studen[j].lest_n,studen[j + 1].lest_n) > 0)
        {
          studen[j] = studen[j + 1];
          studen[j + 1] = studen[20];
        }
      }
    }
  }
  else if (strcmp(slect,"id")==0)
  {
    for (int i=0; i<20; ++i)
    {
      for (int j=0; j<20; ++j)
      {
        studen[20] = studen[j];
        if (strcmp(studen[j].id,studen[j+1].id)>0)
        {
          studen[j] = studen[j+1];
          studen[j+1] = studen[20];
        }
      }
    }
  }
  for (int i=0; i<20; ++i){
    if (strcmp(studen[i].sex,"Male")==0)
    {
      printf("Mr %c %s (%d) ID: %s GPA %.2f\n", studen[i].first_n[0], studen[i].lest_n, studen[i].old, studen[i].id, studen[i].gpa);
    }
    else
    {
      printf("Miss %c %s (%d) ID: %s GPA %.2f\n", studen[i].first_n[0], studen[i].lest_n, studen[i].old, studen[i].id, studen[i].gpa);
    }
  }

  return 0;
}
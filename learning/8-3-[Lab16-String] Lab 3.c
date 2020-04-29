#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  char check1;
  char text[150];
  scanf("%c\n", &check1);
  scanf("%[^\n]",text);
  check1 = tolower(check1);
  int count = 0;
  for (int i = 0; i < strlen(text); ++i)
  {
    if (tolower(text[i]) == check1)
    {
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  char text[150];
  scanf("%[^\n]", text);

  int count = 1;
  int i;
  // นับ word
  for (i = 0; i < strlen(text); ++i)
  {
    if (text[i] == ' ')
    {
      count++;
    }
  }

  printf("%d words\n", count);
  printf("----\n");
  // นับคำใน word
  int count1 = 0;
  for (i = 0; i < strlen(text); ++i)
  {
    if (text[i] == ' '){
      printf(" : %d\n", count1);
      count1 = 0;      
    }
    else{
      printf("%c", tolower(text[i]));
      count1++;
    }
  }
  printf(" : %d", count1);
  return 0;
}

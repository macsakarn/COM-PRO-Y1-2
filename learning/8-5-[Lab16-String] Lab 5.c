#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  char text[450];
  scanf("%[^.]", text);
  int count_char = 0;
  int count_word = 0;
  int count_line = 0;
for (int i = 0; i < strlen(text); ++i)
{
  if((text[i] != ' ') && (text[i] != '\n')){
    count_char++;
  }
  if (text[i] == ' ')
  {
    count_word++;
  }
  if (text[i] == '\n')
  {
    count_line++;
    count_word++;
  }
}

  printf("Char = %d, word = %d, line = %d\n", count_char, count_word, count_line);
  return 0;
}

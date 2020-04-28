#include<stdio.h>
#include<string.h>

int main(){
  char message[101];
  scanf("%s", message);

  char *begin_ptr = message;
  char *end_ptr = message;
  while(*end_ptr != '\0') {
    end_ptr++;
  }
  end_ptr--; 

  for (int i = 1; i <= strlen(message)/2; ++i)
  { 
    char first = *begin_ptr;
    *begin_ptr = *end_ptr;
    *end_ptr = first;
    *begin_ptr++;
    *end_ptr--;
  }

  printf("%s", message);
return 0;
}

#include <stdio.h>
 
int main()
{
  int high;
  scanf("%d", &high);
  for (int i = 0; i < high; i++) 
  {
    for (int you = 0; you < high; you++) 
    {
      if (you == i || you == high-i-1) 
      {
        printf("-");
      } 
      else 
      {
        printf("#");
      }
    }
    printf("\n");
  }
  return 0;
}
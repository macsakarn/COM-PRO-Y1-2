#include <stdio.h>
 
int main()
{
  int side, num_re;
  scanf("%d", &side);
  for (int i=1; i<=side; ++i) 
  {
    for (int j=side; j>0; --j) 
    {
      if (j-i <= 0) 
      {
        printf("*");
      } else {
        printf(" ");
      }
      num_re = j-i;
    }
    for (int k=num_re; k<0; ++k) 
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
#include <stdio.h>
 
int main()
{
  int value, start = 1, product_of_sum = 0;
  while (start) 
  {
    scanf("%d", &value);
    if (value == -9)
    {
      start--;
    } else {
      product_of_sum += value;
    }
  }
  printf("%d", product_of_sum);
  return 0;
}
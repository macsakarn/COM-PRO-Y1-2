#include <stdio.h>
 
int main()
{
  int n, count = 0;
  double num_value, min, max, avg;
  scanf("%d", &n);
  while (count < n)
  {
    scanf("%lf", &num_value);
    if (count > 0) {
      if (num_value < min) 
      {
        min = num_value;
      }
      if (num_value > max) 
      {
        max = num_value;
      }
      avg += num_value;
    } 
    else 
    {
      min = num_value;
      max = num_value;
      avg = num_value;
    }
    count++;
  }
  printf("%d Values\n", n);
  printf("Min: %.3lf\n", min);
  printf("Max: %.3lf\n", max);
  printf("Avg: %.2lf\n", avg/n);
  return 0;
}
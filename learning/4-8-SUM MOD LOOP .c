#include <stdio.h>
 
int main()
{
  int start = 1, loop = 1, n, ans = 0;
  while (start) 
  {
    scanf("%d", &n);
    if (n == 0)
    {
      start--;
    }
    else 
    {
      ans += loop % n;
      loop = n;
    }
  }
  printf("%d", ans);
  return 0;
}
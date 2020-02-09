#include <stdio.h>
#include <math.h>
 
int main()
{
    float num1, num2, num3, num4, num5;
    scanf("%f %f %f", &num1, &num2, &num3);
    num5 = (num1 - num1 * (num2 / 100)) * num3; 
    num4 = num1 * (num3 - floor(num3 / 3));
    if (num5 <= num4)
    {
        printf("Discount %.f%%\n%.2f", num2, num5);
    }
    else
    {
        printf("Buy 2 Get 1\n%.2f", num4);
    }
    return 0;
}
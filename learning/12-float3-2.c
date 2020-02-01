#include<stdio.h>

int main()
{
	float num1, num2, num3, num4;
	scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
	float ans1 = num1 + num2 + num3 + num4;
	float ans2 = ans1 / 4;
	printf("Summation is %.2f\n", ans1);
	printf("Average is %.3f\n", ans2);
	return 0;
}

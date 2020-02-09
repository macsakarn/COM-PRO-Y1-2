#include <stdio.h>

int main()
{
	float num1, num2, num3;
	scanf("%f %f %f", &num1, &num2, &num3);
	if ((num1 + num2 > num3) && (num2 + num3 > num1) && (num3 + num1 > num2))
	{
		printf("Triangle is valid.");
	}
	else 
	{
		printf("Triangle is not valid.");
	}
}
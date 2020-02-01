#include<stdio.h>

int main()
{
	float shirt, persen, num;
	scanf("%f %f %f", &shirt, &persen, &num);
	float ans = (shirt - (shirt * (persen/100))) * num;
	printf("%.2f\n", ans);
	return 0;
}

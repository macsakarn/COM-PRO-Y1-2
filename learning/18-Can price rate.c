#include<stdio.h>

int main()
{
	float price, num_r, num_h;
	double pi = 3.14159265359;
	scanf("%f %f %f", &price, &num_r, &num_h);
	num_r /= 2;
	double ans = num_h * pi * num_r * num_r;
	printf("Volume : %.2lfml\n", ans);
	printf("Baht/ml : %.4lf\n", price / ans);

	return 0;
}

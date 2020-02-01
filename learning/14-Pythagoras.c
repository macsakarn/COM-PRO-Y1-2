#include<stdio.h>
#include<math.h>

int main()
{
	double side_a, side_b;
	scanf("%lf %lf",&side_a, &side_b);
	double ans = pow(side_a, 2) + pow(side_b, 2);
	ans = sqrt(ans);
	printf("%.2lf\n", ans);
	return 0;
}

#include <stdio.h>

int main()
{
	int num;
	int i = 0;
	scanf("%d", &num);
	while (i < num || i > num)
	{
		printf("%d ", num);
		if (num > 0)
		{
			num--;
		}
		else 
		{
			num++;
		}
	}
	printf("0");
	return 0;
}
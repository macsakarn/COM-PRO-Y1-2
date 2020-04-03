#include <stdio.h>

int main()
{
	int number, index, i, you;
	int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
	int N[] = {1, 3, 9, 7, 11, 15, 19};
	int ans = 0;
	while (1){
		scanf("%d", &number);
		if (number >= 1 && number <=20){
			for (i = 0; i < 8; ++i)
			{
				if (number == M[i])
				{
					index = i;
					ans = 1;
					break;
				}
			}
			for (you = 0; you < 7; ++you)
			{
				if (number == N[you])
				{
					index = you;
					ans = 2;
					break;
				}
			}
			if (ans == 1)
			{
				printf("%d is in M at index [%d]\n", number, i);
			}
			else if (ans == 2)
			{
				printf("%d is in N at index [%d]\n", number, you);
			}
			else
			{
				printf("%d is not in neither M nor N\n", number);
			}
			break;
		}
	}
}
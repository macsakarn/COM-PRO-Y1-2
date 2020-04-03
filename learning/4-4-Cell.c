#include <stdio.h>

int top()
{
	for (int i = 0; i < 5; ++i)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}

int mid()
{
	for (int i = 0; i < 2; ++i)
	{
		printf("*-");
	}
	printf("*\n");
	return 0;
}

int main()
{
	char word[3];
	scanf("%s", &word);
	top();
	mid();
	printf("*%s*\n", word);
	mid();
	top();
	return 0;
}
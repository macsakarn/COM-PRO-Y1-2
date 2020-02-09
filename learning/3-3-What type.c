#include<stdio.h>
#include<ctype.h>

int main()
{
	char unknow;
	scanf("%c",&unknow);
	if (isdigit(unknow))
	{
		printf("number\n");
	}
	else if (islower(unknow))
	{
		printf("lowercase\n");
	}
	else if (isupper(unknow))
	{
		printf("uppercase\n");
	}
	else
	{
		printf("error\n");
	}
	return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
	char text[100];
	scanf("%[^\n]", text);
	for (int i = strlen(text); i > 0; --i)
	{
		printf("%c", text[i-1]);
	}
}
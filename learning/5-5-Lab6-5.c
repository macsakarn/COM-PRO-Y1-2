#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{

	char text[300];
	char control;
	char count_as[300] = {0};
	scanf("%[^\n]\n", text);
	scanf("%c", &control);
	char ans = control;
	control = toupper(control);
	for (int i = 0; i < strlen(text); ++i)
	{
		text[i] = toupper(text[i]);
		if(text[i] == control)
		{
			printf("%d\n", i);
			count_as[i] = i + 1;
		}
	}
	if (strlen(count_as) == 0)
	{
		printf("Not found.\n");
	}
	else
	{
		printf("There is/are %d \"%c\" in the above sentences.\n", strlen(count_as), ans);
		printf("Position:");
		for (int i = 0; i < strlen(count_as); ++i)
		{
			printf(" %d, \n", count_as[i]);
		}
	}
	return 0;
}
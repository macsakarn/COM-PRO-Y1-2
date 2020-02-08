#include<stdio.h>
int main()
{
	char text[10];
	scanf("%s",&text);
	printf("%-81.1s",text);
	printf("%-81.2s",text);
	printf("%-81.3s",text);
	printf("%-81.4s",text);
	printf("%-81.5s",text);
	return 0;
}

#include<stdio.h>

int main()
{
	int start;
	scanf("%d",&start);
	int start_sec = start;
	int day = start / 86400;
	start %= 86400;
	int hour = start / 3600;
	start %= 3600;
	int minute = start / 60;
	start %= 60;
	int sec = start;
	printf("%d s = %d d %d h %d m %d s\n", start_sec, day, hour, minute, sec);
	return 0;
}

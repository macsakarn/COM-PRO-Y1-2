#include<stdio.h>

int main()
{
	float point;
	scanf("%f", &point);
    if (point < 0)
    {
      printf("Out of Range");
    }
    else if (point < 50)
    {
        printf("F");
    }
    else if(point < 60)
    {
        printf("D");
    }
    else if(point < 70)
    {
        printf("C");
    }
    else if(point < 80)
    {
        printf("B");
    }
    else if(point <= 100)
    {
        printf("A");
    }
    else
    {
        printf("Out of Range");
    }
}
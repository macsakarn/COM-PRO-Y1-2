#include<stdio.h>

int main()
{
    int i,text[5],number;
    scanf("%d",&number);
    for (i = 0; i < 5; i++)
    {
        text[i] = number % 10;
        number = number / 10;
    }
    printf("%d%d%d%d%d", text[2], text[1], text[0], text[4], text[3]);

    return 0;
}

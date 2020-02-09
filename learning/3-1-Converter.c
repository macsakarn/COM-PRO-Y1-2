#include <stdio.h>
 
int main()
{
    char text1;
    scanf("%c",&text1);
    if (text1 >= 'a' && text1 <= 'z')
    {
        printf("%c",text1-32);
    }
    else if (text1 >= 'A' && text1 <= 'Z')
    {
        printf("%c",text1+32);
    }
    else
    {
        printf("error");
    }
    return 0;
}
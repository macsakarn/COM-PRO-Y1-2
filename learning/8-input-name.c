#include<stdio.h>
int main()
{
    char first_name[100], ID[8];
    char lest_name[100];
    float gpa;
    int day, month, year;
    scanf("%s",&first_name);
    scanf("%s",&lest_name);
    scanf("%s",&ID);
    scanf("%d/%d/%d",&day, &month, &year);
    scanf("%f",&gpa);    
    printf("Fullname: %s %s\n",first_name, lest_name);
    printf("ID: %s\n",ID);
    printf("DOB: %02d-%02d-%04d\n",day, month, year);
    printf("GPA: %.2f\n",gpa);
    return 0;
}
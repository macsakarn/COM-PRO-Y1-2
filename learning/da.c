#include<stdio.h>
#include<string.h>
int main(){
int count = 0;
int number;
char code;
scanf ("%d", &number);
scanf ("%s", &code);
struct Book {
    char id[10];
    char name[100];
    char author[100];
} Book[number];
for(int i = 0; i < number; i++){
    scanf ("%s", &Book[i].id);
    scanf ("%s", &Book[i].name);
    scanf ("%s",&Book[i].author);
}
for(int J = 0; J < number; J++)
{
    if (strcmp(Book[J].id, code) == 0){
        printf("%s %s %s",Book[J].id,Book[J].name,Book[J].author);
        count++;
    }
}
if(count==0){
    printf("Not Found");
}
return 0;
}
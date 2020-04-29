#include<stdio.h>
#include<string.h>

int main(){
  int lon_g;
  char text1[50];
  char text2[40];
  scanf("%d", &lon_g);
  scanf("%s", text1);
  scanf("%s", text2);

  for (int i = 0; i < lon_g; ++i)
  {
  	printf("*");
  }
  printf("\n");
  printf("*\n");
  printf("*\n");
  
  for (int i = 0; i < lon_g; ++i)
  {
  	printf("*");
  }
  return 0;
}
#include<stdio.h>

void swap();

int main(){
  double a, b, c;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  swap(&a, &b, &c);
  printf("%.2lf %.2lf %.2lf\n", a, b, c);
  return 0;
}

void swap(double *a, double *b, double *c){
  double num1 = *a;
  double num2 = *b;
  double num3 = *c;
  num3 = *a;
  *b = num1;
  *c = num2;
}
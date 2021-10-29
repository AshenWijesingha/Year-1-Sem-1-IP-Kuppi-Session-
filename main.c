#include <stdio.h>

int main(void) {

  int quentity;
  float price;
  char letter;
  double number;

  
  scanf("%d",&quentity);
  scanf("%f",&price);
  scanf(" %c",&letter);
  scanf("%lf",&number);

  printf("%d",quentity);
  printf("%lf",price);
  printf(" %c",letter);
  printf("%lf",number);

  return 0;
}
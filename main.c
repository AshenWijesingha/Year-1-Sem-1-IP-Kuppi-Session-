#include <stdio.h>

int main(void) {

  int quentity;
  float price;
  char letter;
  double number;

//inputs
/*
  Integer
    %d
    %i
  
  floating-point
    %f
    %lf

  Character
    %c

  String
    %s
*/

  scanf("%d",&quentity);
  scanf("%f",&price);
  scanf(" %c",&letter);
  scanf("%lf",&number);


//Outputs
/*
  Integer
    %d
    %i
  
  floating-point
    %f
    %lf

  Character
    %c

  String
    %s
*/

  printf("%d",quentity);
  printf("%lf",price);
  printf(" %c",letter);
  printf("%lf",number);

  printf("%d\n", 455);
  printf("%d\n", -455);
  printf("%i\n", 455);
  printf("%f\n", 1234567.89);
  printf("%.2f\n", 3.446);
  printf(" %c\n",'A');

  return 0;
}
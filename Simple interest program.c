#include<stdio.h>
int main()
{
  float p,r,t,si;

  printf("Enter the value of P: ");
  scanf("%f",&p);

  printf("Enter the value of R: ");
  scanf("%f",&r);

  printf("Enter the value of T: ");
  scanf("%f",&t);

  si= (p*r*t)/100;

  printf("Simple Interest = %.2f",si);

  return 0;
}

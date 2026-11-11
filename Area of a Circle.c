#include<stdio.h>
int main()
{
  float radius,area,pi;

  printf("Enter Radius: ");
  scanf("%f",&radius);

  pi=3.14;

  area=pi*radius*radius;

  printf("Area of circle = %.2f",area);

  return 0;
}

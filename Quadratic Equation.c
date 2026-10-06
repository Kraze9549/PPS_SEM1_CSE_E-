#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c;
  float discriminant,root1,root2;
  float real,imaginary;
  printf("\nQuadratic equation is of the form:ax^2 + bx +c =0\n");
  printf("\nEnter the coefficients a, b and c: ");
  scanf("%f %f %f", &a, &b, &c);
  discriminant = b * b - 4 * a * c;
  if (discriminant > 0)
  {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("\nRoot 1 = %.2f\n", root1);
    printf("Root 2 = %.2f\n", root2);

  }
  else if (discriminant == 0)
  {
   root1 = -b / (2 * a);
   printf("\nBoth roots are equal.\n");
   printf("Root = %.2f\n", root1);
  }
  else
  {
    real = -b / (2 * a);
    imaginary = sqrt(-discriminant) / (2 * a);
    printf("\nThe roots are imaginary.\n");
    printf("Root 1 = %.2f + %.2fi\n", real, imaginary);
    printf("Root 2 = %.2f - %.2fi\n", real, imaginary);
  }
  return 0;
}

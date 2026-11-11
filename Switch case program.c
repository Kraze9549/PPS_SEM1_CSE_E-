#include<stdio.h>
int main()
{
  int a,b,result;
  char operator;

  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);

  printf("Enter an operator (+,-,*,/,%%): ");
  scanf(" %c",&operator);

  switch(operator)
  {

  case '+':
            result=a+b;
            printf("Sum = %d",result);

            break;

  case '-':
            result=a-b;
            printf("Difference = %d",result);

            break;

  case '*':
            result=a*b;
            printf("Product = %d",result);

            break;

  case '/':
            if(b!=0)
            {
              result=a/b;
              printf("Quotient = %d",result);
            }
            else
            {
                printf("Not divisible by zero");
            }
              break;

  case '%':
            if(b!=0)
            {
                 result=a%b;
                 printf("Remainder = %d",result);
            }
            else
            {
               printf("Not divisible by zero");
            }
              break;

    default:
           printf("Invalid operator");
           return 0;
  }
           return 0;
}

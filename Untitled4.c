#include<stdio.h>
int main()
{
long int num,binary=0,rem,original,place_value=1;
printf("Enter a decimal number: ");
scanf("%ld",&num);

original=num;
while(num>0)
{
  rem=num%8;
  binary+=(rem*place_value);
  num=num/8;
  place_value*=10;
  }
  printf("\nDecimal number is %ld",original);
  printf("\nBinary number is %ld",binary);
  return 0;
}

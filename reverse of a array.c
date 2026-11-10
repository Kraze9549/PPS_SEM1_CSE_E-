#include<stdio.h>
int main()
{
  int temp,i,a[5]={10,20,30,40,50};

  for(i=0;i<(5/2);i++)
  {
    temp=a[i];
    a[i]= a[4-i];
    a[4-i]=temp;
  }
  for(i=0;i<5;i++)
  printf("%d",a[i]);

  return 0;
}

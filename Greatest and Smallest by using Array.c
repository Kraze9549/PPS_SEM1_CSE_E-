#include<stdio.h>
int main()
{
  int a[64],n,i,max,min;

  printf("Enter the value of n: ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
     printf("Enter the value of %d th: ",i);
   scanf("%d",&a[i]);
  }
   max=min=a[0];

  for(i=0;i<n;i++)
    {
        if(a[i]>max)
       max=a[i];
    if(a[i]<min)
       min=a[i];
    }

  printf("Max=%d\nMin=%d",max,min);

  return 0;

}

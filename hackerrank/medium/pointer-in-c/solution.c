#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,a_sum,b_diff;
    scanf("%d %d",&a,&b);
    int *p = &a;
    int *q = &b;
    a_sum = a + b;
    b_diff = abs(a - b);
    printf("%d\n",a_sum);
    printf("%d",b_diff);
    return 0;
}

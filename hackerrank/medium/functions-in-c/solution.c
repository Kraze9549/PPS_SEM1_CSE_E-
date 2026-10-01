#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int max = a;
    if(b > max)
    max = b;
    if(c > max)
    max = c;
    if(d > max)
    max = d;
    return max;
}
 int main()
 { 
    int a,b,c,d,result;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    result = max_of_four(a, b, c, d);
    printf("%d",result);
    return 0; 
 }

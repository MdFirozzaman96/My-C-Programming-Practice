#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    double x,y,fib;
    scanf("%d",&n);
    x=pow(((1+sqrt(5))/2),n);
    y=pow(((1-sqrt(5))/2),n);
    fib=(x-y)/sqrt(5);
    printf("%0.1lf\n",fib);
    return 0;
}

#include<stdio.h>
int main()
{
    double arr[100],x;
    int i;
    scanf("%lf",&x);
    for(i=0;i<100;i++)
    {
        printf("N[%d] = %0.4lf\n",i,x);
        x=x/2.0;
    }
    return 0;
}

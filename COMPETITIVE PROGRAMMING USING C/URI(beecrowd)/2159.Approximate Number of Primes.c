#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double min,max;
    scanf("%d",&n);
    min=n/log(n);
    max=min*1.25506;
    printf("%0.1lf %0.1lf\n",min,max);
    return 0;
}

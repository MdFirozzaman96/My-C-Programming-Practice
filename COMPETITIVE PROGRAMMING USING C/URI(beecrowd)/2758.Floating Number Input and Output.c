#include<stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    printf("A = %0.6lf, B = %0.6lf\n",a,b);
    printf("C = %0.6lf, D = %0.6lf\n",c,d);

    printf("A = %0.1lf, B = %0.1lf\n",a,b);
    printf("C = %0.1lf, D = %0.1lf\n",c,d);

    printf("A = %0.2lf, B = %0.2lf\n",a,b);
    printf("C = %0.2lf, D = %0.2lf\n",c,d);

    printf("A = %0.3lf, B = %0.3lf\n",a,b);
    printf("C = %0.3lf, D = %0.3lf\n",c,d);

    printf("A = %0.0lf, B = %0.0lf\n",a,b);
    printf("C = %0.0lf, D = %0.0lf\n",c,d);
}

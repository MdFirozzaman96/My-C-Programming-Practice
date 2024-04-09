#include<stdio.h>
int main()
{
    double pi;
    double *p;
    pi = 3.14159265358;
    p = &pi;
    printf("Value of pi : %lf\n",pi);
    printf("Value of *p : %lf\n",*p);
    return 0;

}

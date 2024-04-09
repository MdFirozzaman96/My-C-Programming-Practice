#include<stdio.h>
int main()
{
    int x,y;
    int *p,*q;
    x = 10;
    p = &x;
    y = *p;
    q = &y;
    *p = 130;
    *q = 106;
    printf("Value of x : %d\n",x);
    printf("Value of y : %d\n",y);
    printf("Value of *p : %d\n",*p);
    printf("Value of *q : %d\n",*q);
    return 0;
}

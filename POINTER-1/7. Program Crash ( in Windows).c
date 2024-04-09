#include<stdio.h>
int main()
{
    int x,y;
    int *p,*q;
    x = 10;
    printf("Value of x : %d\n",x);
    p = &x;
    y = *p;
    *p = 130;
    *q = 200;// Please comment in this statement and run the program.
    printf("Value of x : %d\n",x);
    printf("Value of *p : %d\n",*p);
    printf("Value of y : %d\n",y);
    printf("Value of p or Address of x : %p or %p\n",p,&x);
    printf("Value of *q : %d\n",*q);// Please comment in this statement and run the program.

}

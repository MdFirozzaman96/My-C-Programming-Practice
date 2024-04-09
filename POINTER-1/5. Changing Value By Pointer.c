#include<stdio.h>
int main()
{
    int x;
    int *p;
    x=100;
    printf("Value of x is : %d\n",x);
    p = &x;
    *p = 130;
    printf("Value of x is : %d\n",x);
    printf("Address of x is : %p\n",&x);
    printf("Value of p is : %p\n",p);
    printf("Value stored at location %p is %d\n",p,*p);
    return 0;

}

#include<stdio.h>
int main()
{
    int *p,x;
    x=5;
    p=&x;
    printf("*p = %d\n",*p);
    printf("The address of x is : %p\n",&x);
    printf("Value of p is : %p\n",p);
    printf("Address of p is : %p\n",&p);
    return 0;
}

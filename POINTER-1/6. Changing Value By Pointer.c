#include<stdio.h>
int main()
{
    int x,y;
    int *ptr;
    x=10;
    printf("Value of x : %d\n",x);
    ptr = &x;
    y = *ptr;
    *ptr = 30;
    /**ptr = y;
    ptr = &y;
    *ptr = 130;*/ //Checked it.What will be happened.
    printf("Value of x : %d\n",x);
    printf("Value of y : %d\n",y);
    printf("Value of *ptr : %d\n",*ptr);
    printf("Address of x : %p\n",&x);
    printf("Address of y : %p\n",&y);
    printf("Value of ptr : %p\n",ptr);
    printf("Address of ptr : %p\n",&ptr);
}

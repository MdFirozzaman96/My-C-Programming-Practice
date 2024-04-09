#include<stdio.h>
int main()
{
    //int x = 100;
    //int *p = NULL;
    int x;

    x = 100;

    int *p = 500;
     p = &x;
    /*int *p;
    *p = 500;*/
    printf("Value of x : %d\n",x);
    printf("Value of *p : %d\n",*p);
    printf("Value of x : %d\n",x);
    return 0;
}

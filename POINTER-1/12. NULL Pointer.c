#include<stdio.h>
int main()
{
    int x = 100;
    int *p = NULL;
    *p = 130;// Here *p do not point any variable.
    printf("Value of x : %d\n",x);
    printf("Value of *p : %d\n",*p);
    return 0;
}

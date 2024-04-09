//This program will be crash.
#include<stdio.h>
int main()
{
    int x = 5;
    int *p = NULL;
    //*p = NULL; //Please comment out,observe and difference between int *p=NULL; and int *p; *p=NULL;
    printf("Value of x : %d\n",x);
    printf("Value of *p : %d\n",*p);
    return 0;
}

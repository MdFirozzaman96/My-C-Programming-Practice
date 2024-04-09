#include<stdio.h>

int Static()
{
    static int x=10;
    printf("Static = %d, ",x);
    x+=2;
}

int Non_Static()
{
    int x=10;
    printf("Non_Static = %d\n",x);
    x+=2;
}
int main()
{
    Static();
    Non_Static();
    Static();
    Non_Static();
    Static();
    Non_Static();
    return 0;
}

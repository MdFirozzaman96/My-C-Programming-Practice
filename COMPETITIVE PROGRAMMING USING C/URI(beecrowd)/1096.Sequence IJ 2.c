#include<stdio.h>
int main()
{
    int I=1,J;
    for(J=7;I<=9;J--)
    {
        printf("I=%d J=%d\n",I,J);
        if(J==5)
        {
            I=I+2;
            J=8;
        }
    }
    return 0;
}

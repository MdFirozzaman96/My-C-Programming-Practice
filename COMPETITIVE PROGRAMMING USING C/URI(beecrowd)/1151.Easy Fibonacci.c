#include<stdio.h>
int main()
{
    int i,x;
    scanf("%d",&x);
    int fib[x];
    if(x==0)
    {
        printf("0\n");
    }
    else if(x==1)
    {
        printf("0 1\n");
    }
    else if(x==2)
    {
        printf("0 1 1\n");
    }
    else
    {
        printf("0 1 1");
        fib[1]=1;
        fib[2]=1;
        for(i=3;i<x;i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
            printf(" %d",fib[i]);
        }
        printf("\n");
    }
    return 0;
}

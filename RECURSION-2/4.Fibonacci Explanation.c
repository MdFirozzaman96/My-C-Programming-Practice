#include<stdio.h>
int Fib[40];
int fib(int n)
{
    printf("n = %d, ",n);
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    printf("Fib[%d-1] + Fib[%d-2]\n\n",n,n);
    Fib[n]=fib(n-1)+fib(n-2);
    printf("Fib[%d] = %d ",n,Fib[n]);
    return Fib[n];
}
int main()
{
    int n,i;
    scanf("%d",&n);
    fib(n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",Fib[i]);
    }
    printf("\n");
}

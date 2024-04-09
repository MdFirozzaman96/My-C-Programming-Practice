#include<stdio.h>
int main()
{
    unsigned long long int fib[60];
    int i,j,t,x,term;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x==0)
        {
            printf("Fib(0) = 0\n");
        }
        else if(x==1)
        {
            printf("Fib(1) = 1\n");
        }
        else
        {
            fib[0]=0;
            fib[1]=1;
            for(j=2;j<=x;j++)
            {
                fib[j]=fib[j-1]+fib[j-2];
                term=fib[j-1];
            }
            printf("Fib(%d) = %llu\n",x,fib[j-1]);

        }
    }
    return 0;
}

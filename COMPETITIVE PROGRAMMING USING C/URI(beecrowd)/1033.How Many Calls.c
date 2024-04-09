#include<stdio.h>

int count;
int sum;

int rec1(int n)
{
    count+=1;
    if(n==0||n==1)
    {
        return 0;
    }
    else
    {
        rec1(n-1)+rec1(n-2);
    }
    return count;
}
int rec(int n)
{
    if(n==0||n==1)
    {
        sum=sum+n;
    }
    else
    {
        rec(n-1)+rec(n-2);
    }
    return sum;
}
int main()
{
    int i,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        count=-1;
        sum=0;
        scanf("%d",&n);
        printf("fib(%d) = %d calls = %d\n",n,rec1(n),rec(n));
    }
    return 0;
}


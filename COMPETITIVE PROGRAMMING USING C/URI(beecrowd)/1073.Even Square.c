#include<stdio.h>
int main()
{
    int n,i,square,s;
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        square=i*i;
        s=2;
        printf("%d^%d = %d\n",i,s,square);
    }
    return 0;
}

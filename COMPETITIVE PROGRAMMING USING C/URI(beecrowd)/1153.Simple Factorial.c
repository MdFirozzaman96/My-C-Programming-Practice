#include<stdio.h>
int main()
{
    int i,n,fact=1;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    printf("%d\n",fact);
    return 0;
}

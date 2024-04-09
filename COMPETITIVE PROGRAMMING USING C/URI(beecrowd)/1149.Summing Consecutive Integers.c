#include<stdio.h>
int main()
{
    int x,n,k=0,sum=0;
    scanf("%d",&x);
    while(k==0)
    {
        scanf("%d",&n);
        if(n>0)
        {
            k++;
        }
    }
    sum=x+n*n;
    printf("%d\n",sum);
    return 0;
}

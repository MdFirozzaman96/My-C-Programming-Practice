#include<stdio.h>
int main()
{
    int i,j,t,x,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d",&x);
        for(j=0;j<x-1;j++)
        {
            if(x%(j+1)==0)
            {
                sum=(j+1)+sum;
            }
        }
        if(sum==x)
        {
            printf("%d eh perfeito\n",x);
        }
        else
        {
            printf("%d nao eh perfeito\n",x);
        }
    }
    return 0;
}

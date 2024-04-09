#include<stdio.h>
#include<math.h>

int Prime(int X)
{
    int i,sq;
    sq=sqrt(X);
    if(X==2)
    {
        return 130;
    }
    else if(X%2==0||X==1)
    {
        return 116;
    }
    else
    {
        for(i=3;i<=sq;i+=2)
        {
            if(X%i==0)
            {
                return 116;
            }
        }
        return 130;
    }
}
int main()
{
    int t,x,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(Prime(x)==130)
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            printf("%d nao eh primo\n",x);
        }
    }
    return 0;
}

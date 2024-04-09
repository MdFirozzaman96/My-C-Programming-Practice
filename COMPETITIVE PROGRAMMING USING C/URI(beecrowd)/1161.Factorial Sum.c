#include<stdio.h>
int main()
{
    int i,j,x,y;
    long long int sum,fact1=1,fact2=1;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        if(x==0&&y==0)
        {
            sum=2;
            printf("%d\n",sum);
        }
        else if(x==0&&y>0)
        {
            fact1=1;
            for(i=y;i>=1;i--)
            {
                fact2=fact2*i;
            }
            sum=fact1+fact2;
            printf("%d\n",sum);
        }
        else if(y==0&&x>0)
        {
            fact2=1;
            for(i=x;i>=1;i--)
            {
                fact1=fact1*i;
            }
            sum=fact1+fact2;
            printf("%d\n",sum);
        }
        else if(x>0&&y>0)
        {
            for(i=x;i>=1;i--)
            {
                fact1=i*fact1;
            }
            for(i=y;i>=1;i--)
            {
                fact2=i*fact2;
            }
            sum=fact1+fact2;
            printf("%llu\n",sum);
        }

        fact1=1;
        fact2=1;
    }
    return 0;
}

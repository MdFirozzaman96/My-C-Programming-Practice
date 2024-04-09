#include<stdio.h>
int main()
{
    long long int x,y,diff;
    while(scanf("%lld%lld",&x,&y)!=EOF)
    {
        if(x==y)
        {
            printf("0\n");
        }
        else if(x>y)
        {
           diff=x-y;
           printf("%lld\n",diff);
        }
        else
        {
            diff=y-x;
            printf("%lld\n",diff);
        }
    }

    return 0;
}

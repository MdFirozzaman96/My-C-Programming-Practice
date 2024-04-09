#include<stdio.h>
int main()
{
    int r,n,rest,k=1;
    while(1)
    {
        scanf("%d%d",&r,&n);
        if(r==0&&n==0)
        {
            return 0;
        }
        else
        {
            if((n*26+n)<r)
            {
                printf("Case %d: impossible\n",k);
            }
            else
            {
                rest=r%n;
                if(rest>0)
                {
                    rest=1;
                }
                printf("Case %d: %d\n",k,((r/n)-1+rest));
            }
        }
        k+=1;
    }
}

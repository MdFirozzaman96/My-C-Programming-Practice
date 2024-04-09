#include<stdio.h>
int main()
{
    int T,n,i,j;
    scanf("%d",&T);
    if(1<=T<=100)
    {
        for(i=0;i<T;i++)
        {
            scanf("%d",&n);
            printf("Case %d: ",i+1);
            for(j=1;j<=n;j++)
            {
                if(n%j==0)
                {
                    printf("%d ",j);
                }
            }
        }
    }
}

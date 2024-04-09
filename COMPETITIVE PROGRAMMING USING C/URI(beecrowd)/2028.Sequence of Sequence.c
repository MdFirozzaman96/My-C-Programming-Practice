#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            printf("Caso %d: %d numero\n%d\n\n",n+1,n+1,n);
            count+=1;
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                count=count+i;
            }
            printf("Caso %d: %d numeros\n",(n+1),count+1);
            printf("0 ");
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=i;j++)
                {
                    if(j==n)
                    {
                        printf("%d\n\n",i);
                    }
                    else
                    {
                        printf("%d ",i);
                    }
                }
            }
        }
        count=0;
    }
    return 0;
}

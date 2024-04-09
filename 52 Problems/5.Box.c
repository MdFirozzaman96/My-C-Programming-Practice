#include<stdio.h>
int main()
{
    int T,n,i,j,k;
    k=1;
    scanf("%d",&T);
    if(1<=T<=10)
    {
        for(i=0;i<T;i++)
        {
            scanf("%d",&n);
            if(1<=n<=80)
            {
                for(j=1;j<=n;j++)
                {
                    for(k=1;k<=n;k++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
                printf("\n");
            }
        }
    }
}

/*int x=300;
n=x<80;
printf("%d",n);*/

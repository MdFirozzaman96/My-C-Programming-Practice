#include<stdio.h>
int main()
{
    int i,j,k,T,N;
    int arr[j][k];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<=N;j++)
        {
            for(k=0;k<=j;k++)
            {
                if(k==0)
                {
                    arr[j][k]=1;
                    printf("%d ",arr[j][k]);
                }
                else if(k<j)
                {
                    arr[j][k]=arr[j-1][k-1]+arr[j-1][k];
                    printf("%d ",arr[j][k]);
                }
                else if(k==j)
                {
                    arr[j][k]=arr[j-1][k-1];
                    printf("%d ",arr[j][k]);
                }
            }
            printf("\n");
        }
    }

}

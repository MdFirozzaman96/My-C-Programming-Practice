#include<stdio.h>
int main()
{
    int i,N,j,k;
    while(scanf("%d",&N))
    {
        int arr[N];
        for(i=0;i<N-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=1;i<=N;i++)
        {
            k=0;
            for(j=0;j<N-1;j++)
            {
                if(arr[j]==i)
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}

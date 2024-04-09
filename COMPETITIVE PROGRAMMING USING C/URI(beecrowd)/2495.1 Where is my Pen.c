#include<stdio.h>
int main()
{
    int i,N,j,tmp;
    while(scanf("%d",&N))
    {
        int arr[N];
        for(i=0;i<N-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<N-1;i++)
        {
           for(j=1;j<N-1-i;j++)
           {
               if(arr[j-1]>arr[j])
               {
                   tmp=arr[j];
                   arr[j]=arr[j-1];
                   arr[j-1]=tmp;
               }
           }
        }
        for(i=0;i<N;i++)
        {
            if(arr[i]!=(i+1))
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}


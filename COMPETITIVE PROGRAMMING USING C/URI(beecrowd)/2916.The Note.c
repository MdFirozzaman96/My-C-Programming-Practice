#include<stdio.h>
int main()
{
    int i,j,tmp,n,k,sum=0;
    while(scanf("%d%d",&n,&k))
    {
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=1;j<n-i;j++)
            {
                if(arr[j]>arr[j-1])
                {
                    tmp=arr[j-1];
                    arr[j-1]=arr[j];
                    arr[j]=tmp;
                }
            }
        }
        for(i=0;i<k;i++)
        {
            sum=sum+arr[i];
        }
        printf("sum=%d\n",sum);
        sum=0;
    }
    return 0;
}

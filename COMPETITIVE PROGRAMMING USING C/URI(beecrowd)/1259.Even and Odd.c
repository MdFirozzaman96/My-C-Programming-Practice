#include<stdio.h>

void Sort(int arr[],int n)
{
    int i,j,tmp;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(arr[j]<arr[j-1])
            {
                tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
            }
        }
    }
}

int main()
{
    int n,i,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++ )
    {
        scanf("%d",&arr[i]);
    }
    Sort(arr,n);
    for(i=0;i<n;i++ )
    {
        if(arr[i]%2==0)
        {
            printf("%d\n",arr[i]);
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]%2==1)
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}

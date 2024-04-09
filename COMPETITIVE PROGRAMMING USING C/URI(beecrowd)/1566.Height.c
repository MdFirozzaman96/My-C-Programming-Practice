#include<stdio.h>

void Count_Sort(int arr[],int count[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        count[arr[i]]+=1;
    }
}
void Print(int count[],int max)
{
    int i,j,k=0;
    for(i=0;i<max;i++)
    {
        for(j=1;j<=count[i];j++)
        {
            k+=1;
            if(k==1)
            {
                printf("%d",i);
            }
            else
            {
                printf(" %d",i);
            }
        }
    }
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[n],i,max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        max+=1;
        int count[max];
        for(i=0;i<max;i++)
        {
            count[i]=0;
        }
        Count_Sort(arr,count,n);
        Print(count,max);
        printf("\n");
    }
    return 0;
}

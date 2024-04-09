#include<stdio.h>
int Sort(int arr[],int n)
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
/*int Finding(int Marble[],int n,int q)
{
    int low,mid,heigh;
    low=0;
    heigh=n;
    mid=(heigh-low)/2;
    while(low<heigh)
    {
        mid=low+(heigh-low)/2;
        if(low==mid||heigh==mid)
        {
            if(Marble[mid]==q)
            {
                return mid+1;
            }
            else
            {
                return -1;
            }
        }
        else if(Marble[mid]>q)
        {
            heigh=mid;
        }
        else if(Marble[mid]<q)
        {
            low=mid;
        }
        else
        {
            return mid+1;
        }
    }
    return -1;
}*/
int Finding(int arr[],int n,int q)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==q)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int n,q,i,test,k=0;
    while(1)
    {
        scanf("%d%d",&n,&q);
        k+=1;
        if(n==0&&q==0)
        {
            return 0;
        }
        int Marble[n],Queries[q];
        for(i=0;i<n;i++)
        {
            scanf("%d",&Marble[i]);
        }
        Sort(Marble,n);
        printf("CASE# %d:\n",k);
        for(i=0;i<q;i++)
        {
            scanf("%d",&Queries[i]);
            test=Finding(Marble,n,Queries[i]);
            if(test==-1)
            {
                printf("%d not found\n",Queries[i]);
            }
            else
            {
                printf("%d found at %d\n",Queries[i],test);
            }
        }
    }
    return 0;
}

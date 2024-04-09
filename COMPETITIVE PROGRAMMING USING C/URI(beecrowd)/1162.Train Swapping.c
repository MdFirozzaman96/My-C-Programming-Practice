#include<stdio.h>
int main()
{
    int L[52],i,j,t,n,k,swap,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&L[j]);
        }
        for(j=0;j<n;j++)
        {
           for(k=1;k<n-j;k++)
           {
               if(L[k]<L[k-1])
               {
                   count+=1;
                   swap=L[k];
                   L[k]=L[k-1];
                   L[k-1]=swap;
               }
           }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
        count=0;
    }
    return 0;
}

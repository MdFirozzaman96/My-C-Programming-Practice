#include<stdio.h>
int main()
{
    int i,n;
    int arr[24];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i>0)
        {
            if(arr[i]<arr[i-1])
            {
                printf("No\n");
                break;
            }
            else if(i==n-1 && arr[i]>arr[i-1])
            {
                printf("Yes !\n");
            }
        }
    }

}

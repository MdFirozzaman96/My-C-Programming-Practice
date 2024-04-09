#include<stdio.h>
int main()
{
    int arr[20],i,j;
    for(i=0;i<20;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=20-1,j=0;i>=0,j<20;j++,i--)
    {
        printf("N[%d] = %d\n",j,arr[i]);
    }
    return 0;
}

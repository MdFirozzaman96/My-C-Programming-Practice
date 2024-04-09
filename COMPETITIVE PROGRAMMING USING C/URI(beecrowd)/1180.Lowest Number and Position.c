#include<stdio.h>
int main()
{
    int n,i,low,pos,small,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i==0)
        {
            small=arr[i];
            k=i;
        }
        else if(i>=1)
        {
            if(small<arr[i])
            {
                low=small;
                pos=k;
            }
            else
            {
                small=arr[i];
                pos=i;
                k=i;
            }
        }

    }
    printf("Menor valor: %d\nPosicao: %d\n",small,pos);

    return 0;
}

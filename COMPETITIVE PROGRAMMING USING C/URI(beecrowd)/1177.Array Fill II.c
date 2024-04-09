#include<stdio.h>
int main()
{
    int arr[1000],t,i,j=0;
    scanf("%d",&t);
    for(i=0;i<1000;i++)
    {
        if(j==t-1)
        {
            printf("N[%d] = %d\n",i,j);
            j=0;
        }
        else
        {
            printf("N[%d] = %d\n",i,j);
            j=j+1;
        }
    }
    return 0;
}

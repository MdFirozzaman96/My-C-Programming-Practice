#include<stdio.h>
int main()
{
    int arr[10],i,x;
    scanf("%d",&x);
    for(i=0;i<10;i++)
    {
        if(i==0)
        {
            printf("N[%d] = %d\n",i,x);
        }
        else
        {
            x=x*2;
            printf("N[%d] = %d\n",i,x);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int arr[15],x,y,i,mod,k=0,input=1;
    long long int sum;
    while(input==1)
    {
        scanf("%d%d",&x,&y);
        if(x==0&&y==0)
        {
            return 0;
        }
        sum=x+y;
        while(sum!=0)
        {
            mod=sum%10;
            if(mod!=0)
            {
               arr[k]=mod;
               k++;
            }
            sum/=10;
        }
        for(k=k-1;k>=0;k--)
        {
            printf("%d",arr[k]);
        }
        printf("\n");
        k=0;
    }
}

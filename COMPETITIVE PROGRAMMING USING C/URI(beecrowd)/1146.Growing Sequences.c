#include<stdio.h>
int main()
{
    int i,x,k=0;
    while(k==0)
    {
        scanf("%d",&x);
        if(x==0)
        {
            return 0;
        }
        else
        {
            for(i=0;i<x;i++)
            {
                if(i+1<x)
                {
                    printf("%d ",i+1);
                }
                else
                {
                    printf("%d\n",i+1);
                }
            }
        }
    }
    return 0;
}

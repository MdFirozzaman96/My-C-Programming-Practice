#include<stdio.h>
int main()
{
    int i,x,j,sq=1;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        sq=1;
        j=0;
        while(j!=3)
        {
            sq=(i+1)*sq;
            j++;
            if(j<=2)
            {
                printf("%d ",sq);
            }
            else
            {
                printf("%d\n",sq);
            }
        }
    }
    return 0;
}

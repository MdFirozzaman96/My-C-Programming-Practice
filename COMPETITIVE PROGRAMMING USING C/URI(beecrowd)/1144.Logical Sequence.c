#include<stdio.h>
int main()
{
    int i,x,j=0,k=0,sq=1;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        j=0;
        sq=1;
        while(j!=6)
        {
            if(j<3)
            {
                sq=(i+1)*sq;
                if(j==2)
                {
                    printf("%d\n",sq);
                }
                else
                {
                    printf("%d ",sq);
                }
            }
            else
            {
                if(j==3)
                {
                    printf("%d ",i+1);
                }
                else
                {
                    if(j==4)
                    {
                        sq=(i+1)*(i+1)+1;
                        printf("%d ",sq);
                    }
                    else
                    {
                        sq=(i+1)*(i+1)*(i+1)+1;
                        printf("%d\n",sq);
                    }
                }
            }
            j++;
        }
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int i,j,t,x,p=1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x==1)
        {
            printf("Not Prime\n");
        }
        else if(x==2||x==3)
        {
            printf("Prime\n");
        }
        else
        {
            for(j=2;j*j<=x;j++)
            {
                if(x%j==0)
                {
                    p=0;
                    break;
                }
            }
            if(p==1)
            {
                printf("Prime\n");
            }
            else
            {
                printf("Not Prime\n");
            }
            p=1;
        }
    }
    return 0;
}

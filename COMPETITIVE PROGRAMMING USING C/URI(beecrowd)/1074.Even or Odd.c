#include<stdio.h>
int main()
{
    int t,x,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x<0)
        {
            x=-(2*x)+x;
            if(x%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
        else if(x>0)
        {
            if(x%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else
        {
            printf("NULL\n");
        }
    }
    return 0;
}

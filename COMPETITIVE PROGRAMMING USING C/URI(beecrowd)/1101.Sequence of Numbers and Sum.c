#include<stdio.h>
int main()
{
    int i,x,y,sum;
    for(i=0; ;i++)
    {
        sum=0;
        scanf("%d%d",&x,&y);
        if(x>0&&y>0)
        {
            if(x>y)
            {
                while(y!=x+1)
                {
                    printf("%d ",y);
                    sum=y+sum;
                    y+=1;
                }
                printf("Sum=%d\n",sum);
            }
            else if(x<y)
            {
                while(x!=y+1)
                {
                    printf("%d ",x);
                    sum=x+sum;
                    x+=1;
                }
                printf("Sum=%d\n",sum);
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}

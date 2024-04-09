#include<stdio.h>
int main()
{
    int i,t,x,y,X,Y,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d%d",&X,&Y);
        x=X;
        y=Y;
        {
            if(x==y||x==y+1||y==x||y==x+1)
            {
                printf("0\n");
            }
            else if(y>x+1)
            {
                x+=1;
                while(x!=y)
                {
                    if(x%2==1)
                    {
                        sum=sum+x;
                    }
                    x+=1;
                }
                printf("%d\n",sum);
            }
            else
            {
                y+=1;
                while(y!=x)
                {
                    if(y%2==1)
                    {
                        sum=sum+y;
                    }
                    y+=1;
                }
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}

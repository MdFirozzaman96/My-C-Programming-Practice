#include<stdio.h>
int main()
{
    int x,y,sum=0,i;
    scanf("%d%d",&x,&y);
    if(x==y)
    {
        printf("0\n");
    }
    else if(x>y)
    {
        y+=1;
        while(y<=x-1)
        {
            if(y<0)
            {
                y=-(2*y)+y;
                if(y%2==1)
                {
                    y=-y;
                    sum=sum+y;
                    y+=2;
                }
                else
                {
                    y=-y;
                    y+=1;
                }
            }
            else
            {
                if(y%2==1)
                {
                    sum=sum+y;
                    y+=2;
                }
                else
                {
                    y+=1;
                }
            }
        }

        printf("%d\n",sum);
    }
    else
    {
        x+=1;
        while(x<=y-1)
        {
            if(x<0)
            {
                x=-(2*x)+x;
                if(x%2==1)
                {
                    x=-x;
                    sum=sum+x;
                    x+=2;
                }
                else
                {
                    x=-x;
                    x+=1;
                }
            }
            else
            {
                if(x%2==1)
                {
                    sum=sum+x;
                    x+=2;
                }
                else
                {
                    x+=1;
                }
            }

        }

        printf("%d\n",sum);
    }

    return 0;
}

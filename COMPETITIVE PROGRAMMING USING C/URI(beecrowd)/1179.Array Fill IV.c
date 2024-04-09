#include<stdio.h>
int main()
{
    int Even[5],Odd[5],x,i,e=0,o=0;
    for(i=0;i<15;i++)
    {
        scanf("%d",&x);
        if(x<0)
        {
            x=-(2*x)+(x);
            if(x%2==0)
            {
                Even[e]=-x;
                e++;
                if(e==5)
                {
                    for(e=0;e<5;e++)
                    {
                        printf("par[%d] = %d\n",e,Even[e]);
                    }
                    e=0;
                }
            }
            else
            {
                Odd[o]=-x;
                o++;
                if(o==5)
                {
                    for(o=0;o<5;o++)
                    {
                        printf("impar[%d] = %d\n",o,Odd[o]);
                    }
                    o=0;
                }
            }
        }
        else
        {
            if(x%2==0)
            {
                Even[e]=x;
                e++;
                if(e==5)
                {
                    for(e=0;e<5;e++)
                    {
                        printf("par[%d] = %d\n",e,Even[e]);
                    }
                    e=0;
                }
            }
            else
            {
                Odd[o]=x;
                o++;
                if(o==5)
                {
                    for(o=0;o<5;o++)
                    {
                        printf("impar[%d] = %d\n",o,Odd[o]);
                    }
                    o=0;
                }
            }
        }
    }

    for(i=0;i<o;i++)
    {
        printf("impar[%d] = %d\n",i,Odd[i]);
    }
    for(i=0;i<e;i++)
    {
        printf("par[%d] = %d\n",i,Even[i]);
    }

    return 0;
}

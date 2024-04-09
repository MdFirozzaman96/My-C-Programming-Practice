#include<stdio.h>
int main()
{
    long int i,j,a,t,b,c;
    int n[3];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&n[j]);
            if(j==2)
            {
                a = n[j-2]*n[j-2];
                b = n[j-1]*n[j-1];
                c = n[j]*n[j];
                if(a!=0 || b!=0 || c!=0)
                {
                    if(a==b+c)
                    {
                        printf("right\n");
                    }
                    else if(b==a+c)
                    {
                        printf("right\n");
                    }
                    else if(c==a+b)
                    {
                        printf("right\n");
                    }
                    else
                    {
                        printf("wrong\n");
                    }
                }
                if(a==0 && b==0 && c==0)
                {
                    continue;
                }
            }
        }
    }
    return 0;
}


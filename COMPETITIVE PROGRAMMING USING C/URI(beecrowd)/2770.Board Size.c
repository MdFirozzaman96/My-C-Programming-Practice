#include<stdio.h>
int main()
{
    int x,y,z,a,b,i;
    while(scanf("%d%d%d",&x,&y,&z)!=EOF)
    {
        for(i=0;i<z;i++)
        {
            scanf("%d%d",&a,&b);
            if(x<0||x>64||y<0||y>64)
            {
                printf("Nao\n");
            }
            else
            {
                if(a>x&&a>y||b>x&&b>y)
                {
                    printf("Nao\n");
                }
                else
                {
                    printf("Sim\n");
                }
            }
        }

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int x,z,sum=0,k;
    scanf("%d%d",&x,&z);
    if(z>x)
    {
        printf("1\n");
    }
    else
    {
        while(z<=x)
        {
            scanf("%d",&z);
        }
        for(k=0;sum<z;k++)
        {
            sum=sum+x;
            x++;
        }
        printf("%d\n",k);
    }
    return 0;
}



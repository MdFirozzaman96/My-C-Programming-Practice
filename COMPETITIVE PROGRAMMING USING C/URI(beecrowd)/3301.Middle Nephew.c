#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(y>x&&y>z)
    {
        printf("huguinho\n");
    }
    else if(y<x&&y<z)
    {
        printf("luisinho\n");
    }
    else
    {
        printf("zezinho\n");
    }
    /*else if(y>x&&y<z||y<x&&y>z||x==y||y==z||x==y&&y==z&&x==z)
    {
        printf("zezinho\n");
    }
    else if(x==z)
    {
        if(x>y)
        {
            printf("luisinho\n");
        }
        else
        {
           printf("huguinho\n");
        }
    }*/
    return 0;
}

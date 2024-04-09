#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>=b&&a>=c&&a>=d)
    {
        if(b+c>a||b+d>a||c+d>a)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }
    else if(b>=a&&b>=c&&b>=d)
    {
        if(a+c>b||a+d>b||c+d>b)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }
    else if(c>=a&&c>=b&&c>=d)
    {
        if(a+b>c||a+d>c||b+d>c)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }
    else
    {
        if(a+b>d||a+c>d||b+c>d)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}

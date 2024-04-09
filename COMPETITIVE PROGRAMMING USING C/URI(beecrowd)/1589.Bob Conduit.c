#include<stdio.h>
int main()
{
    int i,t,x,y,fit;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&x,&y);
        fit=x+y;
        printf("%d\n",fit);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,t,a,b,op;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%c%d",&a,&op,&b);
        if(a>=0&&a<=1000)
        {
            printf("%d\n",a+b);
        }
        else
        {
            printf("skipped\n");
        }
    }
    return 0;
}

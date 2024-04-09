#include<stdio.h>
int main()
{
    int i,x,y,j;
    scanf("%d%d",&x,&y);
    for(i=0;i<y;i++)
    {
        if((i+1)%x==0)
        {
            printf("%d\n",i+1);
        }
        else
        {
            printf("%d ",i+1);
        }
    }
    return 0;
}

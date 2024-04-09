#include<stdio.h>
int main()
{
    int i,t,x,pos,k,tmp,small=21;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(small>x)
        {
            small=x;
            pos=i+1;
        }
        else
        {
            tmp=small;
            small=tmp;
            k=pos;
            pos=k;
        }

    }
    printf("%d\n",pos);
    return 0;
}

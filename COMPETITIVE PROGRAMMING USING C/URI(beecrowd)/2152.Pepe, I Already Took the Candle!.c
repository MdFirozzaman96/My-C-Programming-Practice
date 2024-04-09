#include<stdio.h>
int main()
{
    int i,t,h,m,phs;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&h,&m,&phs);
        if(h<10&&m<10)
        {
            if(phs==0)
            {
                printf("0%d:0%d - A porta fechou!\n",h,m);
            }
            else
            {
                printf("0%d:0%d - A porta abriu!\n",h,m);
            }
        }
        else if(h<10)
        {
            if(phs==0)
            {
                printf("0%d:%d - A porta fechou!\n",h,m);
            }
            else
            {
                printf("0%d:%d - A porta abriu!\n",h,m);
            }
        }
        else if(m<10)
        {
            if(phs==0)
            {
                printf("%d:0%d - A porta fechou!\n",h,m);
            }
            else
            {
                printf("%d:0%d - A porta abriu!\n",h,m);
            }
        }
        else
        {
            if(phs==0)
            {
                printf("%d:%d - A porta fechou!\n",h,m);
            }
            else
            {
                printf("%d:%d - A porta abriu!\n",h,m);
            }
        }
    }
    return 0;
}

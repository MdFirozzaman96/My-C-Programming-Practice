#include<stdio.h>
int main()
{
    int departure,travel,extra,sumtime;
    scanf("%d%d%d",&departure,&travel,&extra);
    sumtime=departure+travel+extra;
    if(sumtime>0&&sumtime<24)
    {
        printf("%d\n",sumtime);
    }
    else if(sumtime>=24)
    {
        printf("%d\n",(sumtime-24));
    }
    else
    {
        sumtime=-2*(sumtime)+sumtime;
        sumtime=24-sumtime;
        if(sumtime==24)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",sumtime);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int start,end,hours;
    scanf("%d%d",&start,&end);
    if(start>end||start==0&&end==0||start==end)
    {
        hours=24-start+end;
        printf("O JOGO DUROU %d HORA(S)\n",hours);
    }
    else
    {
        hours=end-start;
        printf("O JOGO DUROU %d HORA(S)\n",hours);
    }

    return 0;
}

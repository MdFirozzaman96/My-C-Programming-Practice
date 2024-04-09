#include<stdio.h>
int main()
{
    int x,y,diff,result;
    scanf("%d%d",&x,&y);
    x*=2;
    diff=y-x;
    result=diff/2;
    if(result>0)
    {
        printf("Faltam %d bolinha(s)\n",result);
    }
    else
    {
        printf("Amelia tem todas bolinhas!\n");
    }
    return 0;
}

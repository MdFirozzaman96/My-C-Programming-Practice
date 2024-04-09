#include<stdio.h>
int main()
{
    int i,t,dnd,dsr;
    float div;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&dnd,&dsr);
        if(dsr==0)
        {
            printf("divisao impossivel\n");
        }
        else if(dnd==0)
        {
            printf("0.0\n");
        }
        else
        {
            div=(float)(dnd*1.0/dsr*1.0);
            printf("%0.1f\n",div);
        }
    }
    return 0;
}

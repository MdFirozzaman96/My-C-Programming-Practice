#include<stdio.h>
int main()
{
    int i,t,x,y,rf,bt,cr;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&x,&y);
        rf=9*(x*x)+(y*y);
        bt=2*(x*x)+25*(y*y);
        cr=(-100)*x+(y*y*y);
        if(rf>bt&&rf>cr)
        {
            printf("Rafael ganhou\n");
        }
        else if(bt>rf&&bt>cr)
        {
            printf("Beto ganhou\n");
        }
        /*else if(rf==bt||rf==cr)
        {
            printf("Rafael ganhou\n");
        }
        else if(bt==cr)
        {
            printf("Beto ganhou\n");
        }*/
        else
        {
            printf("Carlos ganhou\n");
        }
    }
    return 0;
}

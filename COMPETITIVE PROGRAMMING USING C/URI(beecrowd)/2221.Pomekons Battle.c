#include<stdio.h>
int main()
{
    int t,i,b,Ad,Dd,Ld,Ag,Dg,Lg;
    float vald,valg;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d%d%d%d",&b,&Ad,&Dd,&Ld,&Ag,&Dg,&Lg);
        if(Ld%2==0)
        {
            vald=(Ad+Dd)/2+b;
        }
        else
        {
            vald=(Ad+Dd)/2;
        }
        if(Lg%2==0)
        {
            valg=(Ag+Dg)/2+b;
        }
        else
        {
            valg=(Ag+Dg)/2;
        }
        if(valg>vald)
        {
            printf("Guarte\n");
        }
        else if(vald>valg)
        {
            printf("Dabriel\n");
        }
        else
        {
            printf("Empate\n");
        }
    }
    return 0;
}

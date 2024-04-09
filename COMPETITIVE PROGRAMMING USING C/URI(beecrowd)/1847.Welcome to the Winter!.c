#include<stdio.h>
int main()
{
    int a,b,c,Iab,Ibc,Dab,Dbc;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b<c||b==c)
    {
        printf(":)\n");
    }
    else if(a<b&&b>c||b==c)
    {
        printf(":(\n");
    }
    else if(a<b&&b<c)
    {
        Iab=b-a;
        Ibc=c-b;
        if(Iab>Ibc)
        {
            printf(":(\n");
        }
        else if(Iab<=Ibc)
        {
            printf(":)\n");
        }
    }
    else if(a>b&&b>c)
    {
        Dab=a-b;
        Dbc=b-c;
        if(Dab>Dbc)
        {
            printf(":)\n");
        }
        else if(Dab<=Dbc)
        {
            printf(":(\n");
        }
    }
    else if(a==b)
    {
        if(b<c)
        {
            printf(":)\n");
        }
        else
        {
            printf(":(\n");
        }
    }
    return 0;
}

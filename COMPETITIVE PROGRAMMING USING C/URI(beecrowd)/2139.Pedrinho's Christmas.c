#include<stdio.h>
int rest_day(int m,int d)
{
    int rest=0;
    if(m==12)
    {
        rest=25-d;
    }
    else if(m==1||m==3||m==5||m==7||m==8||m==10)
    {
        rest=31-d;
    }
    else if(m==4||m==6||m==9||m==11)
    {
        rest=30-d;
    }
    else if(m==2)
    {
        rest=29-d;
    }
    m+=1;
    while(m!=13)
    {
        if(m==3||m==5||m==7||m==8||m==10)
        {
            rest=rest+31;
        }
        else if(m==4||m==6||m==9||m==11)
        {
            rest=rest+30;
        }
        else if(m==2)
        {
            rest=rest+29;
        }
        else if(m==12)
        {
            rest=rest+25;
        }
        m+=1;
    }
    return rest;
}
int main()
{
    int d,m;
    while(scanf("%d%d",&m,&d)!=EOF)
    {

        if(m==12&&d==25)
        {
            printf("E natal!\n");
        }
        else if(m==12&&d==24)
        {
            printf("E vespera de natal!\n");
        }
        else if(m==12&&d>25)
        {
            printf("Ja passou!\n");
        }
        else if(m==12&&d<24||m<12&&d>=1&&d<=31)
        {
            printf("Faltam %d dias para o natal!\n",rest_day(m,d));
        }
    }
    return 0;
}

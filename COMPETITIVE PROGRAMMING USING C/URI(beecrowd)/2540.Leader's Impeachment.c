#include<stdio.h>
int main()
{
    int i,t,vote,res=0;
    float voter,impch;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            scanf("%d",&vote);
            if(vote==1)
            {
                res+=1;
            }
        }
        voter=(float)t*(2.0/3);
        impch=(float)res;
        if(voter<=impch)
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
        res=0;
    }
    return 0;
}

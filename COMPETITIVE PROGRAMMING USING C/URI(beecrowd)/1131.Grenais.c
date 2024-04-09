#include<stdio.h>
int main()
{
    int Inter,Gremio,rpns=1,I=0,G=0,GN=0,Eq=0;
    while(rpns==1)
    {
        scanf("%d%d",&Inter,&Gremio);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&rpns);
        if(Inter>Gremio)
        {
            I++;
        }
        else if(Gremio>Inter)
        {
            G++;
        }
        else
        {
            Eq++;
        }
        GN++;
    }
    printf("%d grenais\n",GN);
    printf("Inter:%d\n",I);
    printf("Gremio:%d\n",G);
    printf("Empates:%d\n",Eq);
    if(I==G)
    {
        printf("Não houve vencedor\n");
    }
    else
    {
        if(I>G)
        {
            printf("Inter venceu mais\n");
        }
        else
        {
            printf("Gremio venceu mais\n");
        }
    }
    return 0;
}

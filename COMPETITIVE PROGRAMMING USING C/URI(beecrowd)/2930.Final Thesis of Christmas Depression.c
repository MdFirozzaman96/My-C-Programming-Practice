#include<stdio.h>
int main()
{
    int del,end,dif;
    scanf("%d%d",&del,&end);
    dif=end-del;
    if(dif<0)
    {
        printf("Eu odeio a professora!\n");
    }
    else if(dif>=3)
    {
        printf("Muito bem! Apresenta antes do Natal!\n");
    }
    else if(dif>=0&&dif<3)
    {
        printf("Parece o trabalho do meu filho!\n");
        if(del+2<24)
        {
            printf("TCC Apresentado!\n");
        }
        else
        {
            printf("Fail! Entao eh nataaaaal!\n");
        }
    }
    return 0;
}

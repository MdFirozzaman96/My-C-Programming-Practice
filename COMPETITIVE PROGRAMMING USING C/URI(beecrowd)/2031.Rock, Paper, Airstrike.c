#include<stdio.h>
int Strcmp(char str1[],char str2[])
{
    int i=0;
    if(str1[i]==str2[i])
    {
        while(str1[i]==str2[i])
        {
            if(str1[i]=='\0'&&str2[i]!='\0'||str1[i]!='\0'&&str2[i]=='\0')
            {
                return 106;
            }
            else if(str1[i]=='\0'&&str2[i]=='\0')
            {
                return 130;
            }
            i+=1;
        }
    }
    else
    {
        return 106;
    }
}
int main()
{
    int i,t;
    char str1[20],str2[20];

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%s%s",str1,str2);
        if(Strcmp(str1,str2)==130)
        {
            if(Strcmp(str1,"papel")==130)
            {
                printf("Ambos venceram\n");
            }
            else if(Strcmp(str1,"pedra")==130)
            {
                printf("Sem ganhador\n");
            }
            else
            {
                printf("Aniquilacao mutua\n");
            }
        }
        else
        {
            if(Strcmp(str1,"ataque")==130&&Strcmp(str2,"pedra")==130||Strcmp(str1,"ataque")==130&&Strcmp(str2,"papel")==130)
            {
                printf("Jogador 1 venceu\n");
            }
            else if(Strcmp(str1,"pedra")==130&&Strcmp(str2,"ataque")==130||Strcmp(str1,"papel")==130&&Strcmp(str2,"ataque")==130)
            {
                printf("Jogador 2 venceu\n");
            }

            else if(Strcmp(str1,"pedra")==130&&Strcmp(str2,"papel")==130)
            {
                printf("Jogador 1 venceu\n");
            }
            else if(Strcmp(str1,"papel")==130&&Strcmp(str2,"pedra")==130)
            {
                printf("Jogador 2 venceu\n");
            }
        }
    }

   return 0;
}

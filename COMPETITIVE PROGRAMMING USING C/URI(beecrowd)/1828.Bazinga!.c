#include<stdio.h>
int Strcmp(char str1[],char str2[] )
{
    int i=0;
    if(str1[i]==str2[i])
    {
        while(str1[i]==str2[i])
        {
            if(str1[i]=='\0'&&str2[i]!='\0'||str1[i]!='\0'&&str2[i]=='\0')
            {
                return 100;
            }
            else if(str1[i]=='\0'&&str2[i]=='\0')
            {
                return 130;
            }
            i+=1;
        }
        return 100;
    }
    else
    {
        return 100;
    }

}
int main()
{
    char str1[20],str2[20];
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s%s",str1,str2);
        if(Strcmp(str1,"tesoura")==130&&Strcmp(str2,"papel")==130||Strcmp(str1,"papel")==130&&Strcmp(str2,"pedra")==130)
        {
            printf("Caso #%d: Bazinga!\n",i+1);
        }
        else if(Strcmp(str1,"pedra")==130&&Strcmp(str2,"lagarto")==130||Strcmp(str1,"lagarto")==130&&Strcmp(str2,"Spock")==130)
        {
            printf("Caso #%d: Bazinga!\n",i+1);
        }
        else if(Strcmp(str1,"Spock")==130&&Strcmp(str2,"tesoura")==130||Strcmp(str1,"tesoura")==130&&Strcmp(str2,"lagarto")==130)
        {
            printf("Caso #%d: Bazinga!\n",i+1);
        }
        else if(Strcmp(str1,"lagarto")==130&&Strcmp(str2,"papel")==130||Strcmp(str1,"papel")==130&&Strcmp(str2,"Spock")==130)
        {
            printf("Caso #%d: Bazinga!\n",i+1);
        }
        else if(Strcmp(str1,"Spock")==130&&Strcmp(str2,"pedra")==130||Strcmp(str1,"pedra")==130&&Strcmp(str2,"tesoura")==130)
        {
            printf("Caso #%d: Bazinga!\n",i+1);
        }
        else if(Strcmp(str1,str2)==130)
        {
            printf("Caso #%d: De novo!\n",i+1);
            continue;
        }
        else
        {
            printf("Caso #%d: Raj trapaceou!\n",i+1);
        }
    }

    return 0;
}

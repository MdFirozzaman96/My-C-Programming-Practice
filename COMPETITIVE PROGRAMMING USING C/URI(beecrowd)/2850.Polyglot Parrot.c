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
                return 111;
            }
            else if(str1[i]=='\0'&&str2[i]=='\0')
            {
                return 130;
            }
            i+=1;
        }
        return 111;
    }
    else
    {
        return 111;
    }
}
int main()
{
    char str[20];

    while(gets(str))
    {
        if(Strcmp(str,"esquerda")==130)
        {
            printf("ingles\n");
        }
        else if(Strcmp(str,"direita")==130)
        {
            printf("frances\n");
        }
        else if(Strcmp(str,"as duas")==130)
        {
            printf("caiu\n");
        }
        else if(Strcmp(str,"nenhuma")==130)
        {
            printf("portugues\n");
        }
    }
    return 0;
}

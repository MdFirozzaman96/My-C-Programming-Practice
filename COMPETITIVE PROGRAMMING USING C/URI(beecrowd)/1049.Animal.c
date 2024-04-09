#include<stdio.h>
int Stcom(char str1[],char str2[])
{
    int i=0;
    while(str1[i]==str2[i])
    {
        i+=1;
        if(str1[i]=='\0'&&str2[i]=='\0')
        {
            return 1;
        }
        else if(str1[i]=='\0'&&str2[i]!='\0'||str1[i]!='\0'&&str2[i]=='\0')
        {
            return 0;
        }
    }
    return 0;
}
int main()
{
    char str1[20],str2[20],str3[20];

    scanf("%s%s%s",&str1,&str2,&str3);

    if(1==Stcom(str1,"vertebrado"))
    {
        if(1==Stcom(str2,"mamifero"))
        {
            if(1==Stcom(str3,"onivoro"))
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
        else
        {
            if(1==Stcom(str3,"carnivoro"))
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
    }

    else
    {
        if(1==Stcom(str2,"inseto"))
        {
            if(1==Stcom(str3,"hematofago"))
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if(1==Stcom(str3,"hematofago"))
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}

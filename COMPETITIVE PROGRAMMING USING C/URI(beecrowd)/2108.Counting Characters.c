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
int Strlen(char str[])
{
    int i=0;
    while(str[i]!='0')
    {
        i+=1;
    }
    return i;
}
int main()
{
    char str[1000];
    int i,count=0;
    while(gets(str))
    {
        if(Strcmp(str,"0")==130)
        {
            return 0;
        }
        else
        {
            for(i=0;i<Strlen(str);i++)
            {
                if
            }
        }
    }
}

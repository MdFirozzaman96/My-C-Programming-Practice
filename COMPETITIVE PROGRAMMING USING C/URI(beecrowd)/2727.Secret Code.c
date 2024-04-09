#include<stdio.h>
int StrCom(char str1[],char str2[])
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
    return 111;
}
int Strlen(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i+=1;
    }
    return i;
}
int main()
{
    int i,t,j,count=0;
    char str[51];
    while(scanf("%d",&t)!=EOF)
    {
        for(i=0;i<t+1;i++)
        {
            gets(str);
            if(i>0)
            {
                if(StrCom(str,".")==130)
                {
                    printf("a\n");
                }
                else if(StrCom(str,"..")==130)
                {
                    printf("b\n");
                }
                else if(StrCom(str,"...")==130)
                {
                    printf("c\n");
                }
                else if(StrCom(str,". .")==130)
                {
                    printf("d\n");
                }
                else if(StrCom(str,".. ..")==130)
                {
                    printf("e\n");
                }
                else if(StrCom(str,"... ...")==130)
                {
                    printf("f\n");
                }
                else if(StrCom(str,". . .")==130)
                {
                    printf("g\n");
                }
                else if(StrCom(str,".. .. ..")==130)
                {
                    printf("h\n");
                }
                else if(StrCom(str,"... ... ...")==130)
                {
                    printf("i\n");
                }
                else
                {
                    for(j=0;j<Strlen(str);j++)
                    {
                        if(str[j]=='.')
                        {
                            count+=1;
                        }
                    }
                    printf("%c\n",96+count);
                    count=0;
                }

            }
        }
    }
    return 0;
}

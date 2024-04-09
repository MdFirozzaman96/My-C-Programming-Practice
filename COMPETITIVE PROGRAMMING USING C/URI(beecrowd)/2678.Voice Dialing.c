#include<stdio.h>
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
    int i;
    char str[320];
    while(scanf("%s",str)!=EOF)
    {
        for(i=0;i<Strlen(str);i++)
        {
            if(str[i]>='A'&&str[i]<='C')
            {
                printf("2");
            }
            else if(str[i]>='D'&&str[i]<='F')
            {
                 printf("3");
            }
            else if(str[i]>='G'&&str[i]<='I')
            {
                 printf("4");
            }
            else if(str[i]>='J'&&str[i]<='L')
            {
                 printf("5");
            }
            else if(str[i]>='M'&&str[i]<='O')
            {
                 printf("6");
            }
            else if(str[i]>='P'&&str[i]<='S')
            {
                 printf("7");
            }
            else if(str[i]>='T'&&str[i]<='V')
            {
                 printf("8");
            }
            else if(str[i]>='W'&&str[i]<='Z')
            {
                 printf("9");
            }
            else if(str[i]>='0'&&str[i]<='9'||str[i]=='*'||str[i]=='#')
            {
                 printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

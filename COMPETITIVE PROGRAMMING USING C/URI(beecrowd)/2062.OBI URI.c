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
    int i,j,t,len;
    char str[100];
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%s",str);
        len=Strlen(str);
        if(len==3)
        {
            if(str[0]=='U'&&str[1]=='R'&&str[2]!='I')
            {
                if(i==t-1)
                {
                    printf("URI\n");
                }
                else
                {
                    printf("URI ");
                }
            }
            else if(str[0]=='O'&&str[1]=='B'&&str[2]!='I')
            {
                if(i==t-1)
                {
                    printf("OBI\n");
                }
                else
                {
                    printf("OBI ");
                }
            }
            else if(str[0]=='U'&&str[1]=='R'&&str[2]=='I'||str[0]=='O'&&str[1]=='B'&&str[2]=='I')
            {
                if(i==t-1)
                {
                    printf("%s\n",str);
                }
                else
                {
                    printf("%s ",str);
                }
            }
            else
            {
                if(i==t-1)
                {
                    printf("%s\n",str);
                }
                else
                {
                    printf("%s ",str);
                }
            }
        }
        else
        {
            if(i==t-1)
            {
                printf("%s\n",str);
            }
            else
            {
                printf("%s ",str);
            }
        }
    }
    return 0;
}

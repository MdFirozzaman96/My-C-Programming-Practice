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
    char str[1010],ch;
    int i,j,t,k,s=1,n=1;
    scanf("%d",&t);
    for(k=0;k<t+1;k++)
    {
        gets(str);
        if(k>0)
        {
           for(i=1;i<Strlen(str);i++)
            {
                if(str[i]>='a'&&str[i]<='z')
                {
                    for(j=0;j<i;j++)
                    {
                        if(str[i]==str[j])
                        {
                            s=0;
                        }
                    }
                }
                if(s==1&&str[i]>='a'&&str[i]<='z')
                {
                    n+=1;
                }
                s=1;
            }
            if(n<13)
            {
                printf("frase mal elaborada\n");
            }
            else if(n>=13&&n<=25)
            {
                printf("frase quase completa\n");
            }
            else if(n==26)
            {
                printf("frase completa\n");
            }
        }
        n=1;
        s=1;
    }
    return 0;
}

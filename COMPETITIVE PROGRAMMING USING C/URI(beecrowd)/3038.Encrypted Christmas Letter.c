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
    char let[300],ch;
    int i;
    ///printf("%d",Strlen(gets(let)));
    while(gets(let))
    {
        for(i=0;i<Strlen(let);i++)
        {
            if(let[i]=='@')
            {
                let[i]='a';
            }
            else if(let[i]=='&')
            {
                let[i]='e';
            }
            else if(let[i]=='!')
            {
                let[i]='i';
            }
            else if(let[i]=='*')
            {
                let[i]='o';
            }
            else if(let[i]=='#')
            {
                let[i]='u';
            }
            printf("%c",let[i]);
        }
        printf("\n");
    }
    return 0;
}

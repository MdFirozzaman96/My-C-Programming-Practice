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
    char str[200];
    gets(str);
    for(i=0;i<Strlen(str);i++)
    {
        if(str[i]==',')
        {
            printf("\n");
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}

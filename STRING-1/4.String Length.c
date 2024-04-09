#include<stdio.h>
int String_Length(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {

    }
    return i;
}
int main()
{
    int Length,i;
    i=0;
    char String[100];
    while(i!=3)
    {
        scanf("%s",String);
        Length=String_Length(String);
        printf("%d\n",Length);
        i++;
    }
}

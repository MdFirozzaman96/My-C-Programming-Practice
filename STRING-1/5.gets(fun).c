#include<stdio.h>
int String_Length(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
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
        gets(String);
        Length=String_Length(String);
        printf("%d\n",Length);
        i++;
    }
}

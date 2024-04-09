#include<stdio.h>
int main()
{
    char str[501];
    int i=0;
    gets(str);
    while(str[i]!='\0')
    {
        i+=1;
    }
    if(i<=140)
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }
    return 0;
}

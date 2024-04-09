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
    char str[501];
    gets(str);
    if(Strlen(str)<=80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;

}

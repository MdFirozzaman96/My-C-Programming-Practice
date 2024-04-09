#include<stdio.h>
int main()
{
    int i,x;
    char str[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        if(i+1==x)
        {
            printf("%c\n",str[i]);
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}

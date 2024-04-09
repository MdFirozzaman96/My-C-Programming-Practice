#include<stdio.h>
int main()
{
    char str[60];
    int i,j,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        if(str[0]>=97&&&str[0]<=122)
        {
            printf("%c",str[0]);
        }
        for(int i=1;str[i]!='\0';i++)
        {
            if(str[i-1]==46&&str[i]>='a'&&&str[i]<='z')
            {
                printf("%c Firoz",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

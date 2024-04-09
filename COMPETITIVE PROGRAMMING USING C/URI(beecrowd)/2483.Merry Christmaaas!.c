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
    int i,x,count=0;
    scanf("%d",&x);
    char str[]="Feliz natal!";
    for(i=0;i<Strlen(str);i++)
    {
        if(str[i]=='a'&&str[i+1]=='l')
        {
            while(count!=x)
            {
                printf("a");
                count+=1;
            }
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}

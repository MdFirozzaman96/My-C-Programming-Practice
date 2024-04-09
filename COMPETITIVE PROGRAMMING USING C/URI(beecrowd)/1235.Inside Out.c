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
    char str[110];
    int i,j,t,len;
    scanf("%d",&t);
    for(i=0;i<t+1;i++)
    {
        gets(str);
        if(i>0)
        {
            len=Strlen(str);
            for(j=(len/2)-1;j>=0;j--)
            {
                printf("%c",str[j]);
            }
            for(j=len-1;j>=len/2;j--)
            {
                printf("%c",str[j]);
            }
            printf("\n");
        }
    }
    return 0;
}

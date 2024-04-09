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
    int i,j,len,k=0;
    char str[110];
    while(scanf("%s",str)!=EOF)
    {
        len=Strlen(str);
        printf("%d",len);
        for(i=0;i<len;i++)
        {
            if(i==0)
            {

                for(j=0+i;j<len;j++)
                {
                    if(j==len-1)
                    {
                        printf("%c\n",str[j]);
                    }
                    else
                    {
                        printf("%c ",str[j]);
                    }
                }
            }
            else
            {
                for(k=0;k<i;k++)
                {
                    printf(" ");
                }

                for(j=0;j<len-i;j++)
                {
                    if(j==len-1-i)
                    {
                        printf("%c",str[j]);
                    }
                    else
                    {
                        printf("%c ",str[j]);
                    }
                }
                printf("\n");
            }
        }
        printf("\n");
        k=0;
    }
    return 0;
}

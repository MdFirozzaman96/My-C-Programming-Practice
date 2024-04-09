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
    char s1[50],s2[50],s3[50];
    int i;
    gets(s1);
    gets(s2);
    gets(s3);
    printf("%s%s%s\n",s1,s2,s3);
    printf("%s%s%s\n",s2,s3,s1);
    printf("%s%s%s\n",s3,s1,s2);

    if(Strlen(s1)>10)
    {
        for(i=0;i<10;i++)
        {
            printf("%c",s1[i]);
        }
    }
    else
    {
        printf("%s",s1);
    }

    if(Strlen(s2)>10)
    {
        for(i=0;i<10;i++)
        {
            printf("%c",s2[i]);
        }
    }
    else
    {
        printf("%s",s2);
    }

    if(Strlen(s3)>10)
    {
        for(i=0;i<10;i++)
        {
            printf("%c",s3[i]);
        }
        printf("\n");;
    }
    else
    {
        printf("%s\n",s3);
    }

    return 0;
}

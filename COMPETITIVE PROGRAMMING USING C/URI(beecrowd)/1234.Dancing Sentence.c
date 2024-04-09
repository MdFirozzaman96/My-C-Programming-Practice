/*#include<stdio.h>
int main()
{
    char str[50];
    int i,k;
    while(gets(str)!=NULL)
    {

        k=0;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
            {
                k+=1;
                if(k%2==1)
                {
                    if(str[i]>='A'&&str[i]<='Z')
                    {
                        if(str[i+1]=='\0')
                        {
                            printf("%c\n",str[i]);
                        }
                        else
                        {
                            printf("%c",str[i]);
                        }
                    }
                    else
                    {
                        str[i]=str[i]-'a'+'A';
                        if(str[i+1]=='\0')
                        {
                            printf("%c\n",str[i]);
                        }
                        else
                        {
                            printf("%c",str[i]);
                        }
                    }
                }
                else
                {
                    if(str[i+1]=='\0')
                    {
                        printf("%c\n",str[i]);
                    }
                    else
                    {
                        printf("%c",str[i]);
                    }
                }
            }
            else if(str[i]==' ')
            {
                printf("%c",str[i]);
            }
        }

    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    char str[50];
    int i,k;
    while(gets(str)!=NULL)
    {

        k=0;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
            {
                k+=1;
                if(k%2==1)
                {
                    if(str[i]>='A'&&str[i]<='Z')
                    {
                        if(str[i+1]=='\0')
                        {
                            printf("%c\n",str[i]);
                        }
                        else
                        {
                            printf("%c",str[i]);
                        }
                    }
                    else
                    {
                        str[i]=str[i]-'a'+'A';
                        if(str[i+1]=='\0')
                        {
                            printf("%c\n",str[i]);
                        }
                        else
                        {
                            printf("%c",str[i]);
                        }
                    }
                }
                else if(k%2==0)
                {
                    if(str[i]>='a'&&str[i]<='z')
                    {
                        if(str[i+1]=='\0')
                        {
                            printf("%c\n",str[i]);
                        }
                        else
                        {
                            printf("%c",str[i]);
                        }
                    }
                    else
                    {
                        str[i]=str[i]-'A'+'a';
                        if(str[i+1]=='\0')
                        {
                            printf("%c\n",str[i]);
                        }
                        else
                        {
                            printf("%c",str[i]);
                        }
                    }

                }
            }
            /*else if(str[i]==' ')
            {
                printf("%c",str[i]);
            }*/
        }

    }
    return 0;
}


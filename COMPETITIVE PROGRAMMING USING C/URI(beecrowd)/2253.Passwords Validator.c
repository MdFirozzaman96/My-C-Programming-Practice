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
    char str[100];
    int i=0,u=0,l=0,n=0,result,result1=3;;
    while(gets(str))
    {
        if(Strlen(str)>32||Strlen(str)<6)
        {
            printf("Senha invalida.\n");
        }
        else
        {
            while(str[i]!='\0')
            {
                if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]>='0'&&str[i]<='9')
                {
                    if(l==0&&str[i]>='a'&&str[i]<='z')
                    {
                        l=1;
                    }
                    else if(u==0&&str[i]>='A'&&str[i]<='Z')
                    {
                        u=1;
                    }
                    else if(n==0&&str[i]>='0'&&str[i]<='9')
                    {
                        n=1;
                    }
                }
                else
                {
                    result1=2;
                    break;
                }
                i+=1;
            }
            result=u+l+n;
            if(result==3&&result1==3)
            {
                printf("Senha valida.\n");
            }
            else
            {
                printf("Senha invalida.\n");
            }
            i=0,u=0,l=0,n=0,result1=3;
        }
    }
    return 0;

}

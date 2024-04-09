#include<stdio.h>
int Strcmp(char str1[],char str2[])
{
    int i=0;
    if(str1[i]==str2[i])
    {
        while(str1[i]==str2[i])
        {
            if(str1[i]=='\0'&&str2[i]!='\0'||str1[i]!='\0'&&str2[i]=='\0')
            {
                return 112;
            }
            else if(str1[i]=='\0'&&str2[i]=='\0')
            {
                return 130;
            }
            i+=1;
        }
        return 112;
    }
    else
    {
        return 112;
    }
}
int main()
{
    int i,t,k;
    char str[100];
    scanf("%d",&t);
    for(i=0;i<t+1;i++)
    {
        gets(str);/// To using gets() into for loop,i's value 1 increment automatically.
        if(Strcmp(str,"Ciencia da Computacao")==130)
        {
            k=130;
        }
        else
        {
            k=130;
        }
    }
    if(k==130)
    {
        printf("Ciencia da Computacao\n");
    }
    return 0;

}

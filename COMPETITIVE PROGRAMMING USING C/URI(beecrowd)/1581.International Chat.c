#include<stdio.h>
int Strcmp(char str1[],char str2[])
{
    int i=0;
    if(str1[i]==str2[i])
    {
        while(str1[i]==str2[i])
        {
            if(str1[i]!='\0'&&str2[i]=='\0'||str1[i]=='\0'&&str2[i]!='\0')
            {
                return 106;
            }
            else if(str1[i]=='\0'&&str2[i]=='\0')
            {
                return 130;
            }
            i+=1;
        }
        return 106;
    }
    else
    {
        return 106;
    }
}
int main()
{
    char str1[20],str2[20];
    int i,j,t,ns,lang=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%s",&ns,str1);
        for(j=0;j<ns-1;j++)
        {
            scanf("%s",&str2);
            if(Strcmp(str1,str2)==106)
            {
                lang=1;
            }

        }
        if(lang==1)
        {
            printf("ingles\n");
        }
        else
        {
            printf("%s\n",str1);
        }
        lang=0;
    }
    return 0;
}

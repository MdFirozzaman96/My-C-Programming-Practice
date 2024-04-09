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
                return 111;
            }
            else if(str1[i]=='\0'&&str2[i]=='\0')
            {
                return 130;
            }
            i+=1;
        }
        return 111;
    }
    else
    {
        return 111;
    }
}
int main()
{
    char nm1[20],nm2[20],par1[10],par2[10];
    int i,t,x,y,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s%s%s%s",nm1,par1,nm2,par2);
        scanf("%d%d",&x,&y);
        sum=x+y;
        if(sum%2==0)
        {
            if(Strcmp(par1,"PAR")==130)
            {
                printf("%s\n",nm1);
            }
            else if(Strcmp(par2,"PAR")==130)
            {
                printf("%s\n",nm2);
            }
        }
        else if(sum%2==1)
        {
            if(Strcmp(par1,"IMPAR")==130)
            {
                printf("%s\n",nm1);
            }
            else if(Strcmp(par2,"IMPAR")==130)
            {
                printf("%s\n",nm2);
            }
        }
        sum=0;
    }
    return 0;
}

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
                return 116;
            }
            else if(str1[i]=='\0'&&str2[i]=='\0')
            {
                return 130;
            }
            i+=1;
        }
        return 116;
    }
    else
    {
        return 116;
    }
}
int main()
{
    char ch[10];
    int i,j=0,k=0,sum,base;
    while(k!=3)
    {
        gets(ch);
            base=4;
            if(ch[0]=='*'||ch[0]=='-')
            {
                for(i=0;i<3;i++)
                {
                    if(ch[i]=='*')
                    {
                        sum=base+sum;
                    }
                    else
                    {
                        sum=0+sum;
                    }
                    base=base/2;
                }
            }
            else if(Strcmp(ch,"caw caw")==130)
            {
                printf("%d\n",sum);
                k++;
                sum=0;
            }
    }
    return 0;

}

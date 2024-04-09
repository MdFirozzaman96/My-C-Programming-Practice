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
    int i,j,k,t,len,count=1,big=1;
    char str[200];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",str);
        len=Strlen(str);
        for(j=1;j<len;j++)
        {
            if(str[j]==str[j-1])
            {
                count+=1;
                if(j==len-1)
                {
                    big=count;
                }
            }
            else
            {
                if(big<count)
                {
                    big=count;
                }
                count=1;
            }
        }
        printf("%d\n",big);
        count=1;
        big=1;
    }
    return 0;
}

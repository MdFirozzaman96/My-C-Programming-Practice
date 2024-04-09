#include<stdio.h>
int Strlen(char Str[])
{
    int i=0;
    while(Str[i]!='\0')
    {
        i+=1;
    }
    return i;
}
int main()
{
    char str1[1000],str2[1000];
    int i,j,t,len1,len2,length;
    scanf("%d",&t);

    for(j=0;j<t;j++)
    {
        scanf("%s%s",str1,str2);
        len1=Strlen(str1);
        len2=Strlen(str2);
        length=len2;
        for(i=0;i<length;i++)
        {
            len1-=1;
            len2-=1;
            if(len1<len2)
            {
               printf("nao encaixa\n");
               break;
            }
            else if(str1[len1]!=str2[len2])
            {
                printf("nao encaixa\n");
                break;
            }
            else if(i==length-1&&str1[len1]==str2[len2])
            {
                printf("encaixa\n");
            }
        }
   }
    return 0;
}

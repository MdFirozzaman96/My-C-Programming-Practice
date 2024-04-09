#include<stdio.h>
int Strcmp(char str1[],char str2[])
{
    int i=0;
    if(str1[i]==str2[i])
    {
        return 130;
    }
    else
    {
        return 111;
    }
}
int main()
{
    int i,t,boy=0,girl=0;
    char name[50],gift[3];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s%s",name,gift);
        if(Strcmp(gift,"M")==130)
        {
            boy+=1;
        }
        else
        {
            girl+=1;
        }
    }
    printf("%d carrinhos\n%d bonecas\n",boy,girl);
    return 0;
}

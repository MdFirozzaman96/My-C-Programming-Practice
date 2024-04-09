#include<stdio.h>
int StrCom(char str1[],char str2[])
{
    int i,j;
    for(i=0;str1[i]!='\0';i++)
    {

    }
    for(j=0;str2[j]!='\0';j++)
    {

    }
    printf("i=%d,j=%d\n",i,j);
    if(j>i)
    {
        return i;
    }
    else
    {
        return j;
    }
}
int main()
{
    char str[6][50];
    int i,t;
    printf("i = %d\n",i);
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",str[i]);
    }
    printf("%d",StrCom(str[0],str[1]));

}

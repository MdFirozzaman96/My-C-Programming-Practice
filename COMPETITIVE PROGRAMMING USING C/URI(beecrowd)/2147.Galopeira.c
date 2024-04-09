#include<stdio.h>
int main()
{
    int i,j,t,count=0;
    float res;
    char word[10000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",word);
        for(j=0;word[j]!='\0';j++)
        {
            count+=1;
        }
        res=count*1.0/100;
        printf("%0.2f\n",res);
        count=0;
    }
    return 0;
}

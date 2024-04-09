#include<stdio.h>
#include<string.h>
int Check(char str[],char seq[])
{
    int i,j;
    for(i=0;i<(strlen(str)-strlen(seq)+1);i++)
    {
        if(seq[0]==str[i])
        {
            int k=1,test=1;
            for(j=i+1;seq[k]!='\0';j++)
            {
                if(str[j]!=seq[k])
                {
                    test=0;
                    break;
                }
                k+=1;
            }
            if(test==1)
            {
                return 130;
            }
        }
    }
    return 116;
}
int main()
{
    char str[10][100002],seq[110];
    int t,n,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",str[i]);
    }
    scanf("%d",&n);
    for(i=0;i<t;i++)
    {
        while(n--)
        {
            scanf("%s",seq);
            if(Check(str[i],seq)==130)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}

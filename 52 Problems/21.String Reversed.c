#include<stdio.h>
int main()
{
    int i,j,T,count;
    scanf("%d",&T);
    char str[1000];
    for(i=0;i<T;i++)
    {
        count=0;
        for(j=0;j<1000;j++)
        {
            count=count+1;
            /*if(str[j]=='\0')
            {
                break;
            }*/
        }
        for(i=count-1;i<=0;i--)
        {
            printf("%c",str[count]);
        }
        printf("\n");
    }
}

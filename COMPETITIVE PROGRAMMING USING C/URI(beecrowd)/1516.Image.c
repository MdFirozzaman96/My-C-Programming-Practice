#include<stdio.h>
int main()
{
    int i,j,n,m,a,b,k,end=0;
    char str[100];
    while(end==0)
    {
        scanf("%d%d",&n,&m);
        if(n==0&&m==0)
        {
            return 0;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%s",str);
            }
        }
        scanf("%d%d",&a,&b);
        k=b/m;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                printf("%c",str[j]);
            }
            printf("\n\n");
        }
    }
}

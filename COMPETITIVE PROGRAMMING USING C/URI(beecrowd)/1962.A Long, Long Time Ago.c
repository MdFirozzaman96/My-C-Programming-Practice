#include<stdio.h>
int main()
{
    int i,n,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t>=2015)
        {
           printf("%d A.C.\n",(t-2015+1));
        }
        else
        {
            printf("%d D.C.\n",(2015-t));
        }
    }
    return 0;
}

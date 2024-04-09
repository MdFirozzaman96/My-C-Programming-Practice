#include<stdio.h>
int main()
{
    int i,T,j,n;
    j=1;
    printf("Enter the number of test case : ");
    scanf("%d",&T);
    if(T<=100)
    {
        for(i=0;i<T;i++)
        {
            scanf("%d",&n);
            for(j=1;j<=n;j++)
            {
                if(j*j==n)
                {
                    printf("YES\n");
                    break;
                }
                else if(j==n)
                {
                   printf("NO\n");
                }
            }
        }
    }
}

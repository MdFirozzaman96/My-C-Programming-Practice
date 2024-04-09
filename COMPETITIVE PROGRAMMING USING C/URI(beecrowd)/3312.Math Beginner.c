#include<stdio.h>
int main()
{
    int i,j,t,sq,prime=1;
    unsigned long long int fact=1;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<t;i++)
    {
        if(arr[i]==2)
        {
            printf("2! = 2\n");
        }
        else if(arr[i]==3)
        {
            printf("3! = 6\n");
        }
        else if(arr[i]>3)
        {
            sq=(int)sqrt(arr[i]);
            for(j=2;j<=sq;j+=2)
            {
                if(arr[i]%j==0)
                {
                    prime=0;
                }
            }
            if(prime==1)
            {
                for(j=1;j<=arr[i];j++)
                {
                    fact=fact*j;
                }
                printf("%d! = %llu\n",arr[i],fact);
            }
            prime=1;
            fact=1;
        }
    }
    return 0;
}

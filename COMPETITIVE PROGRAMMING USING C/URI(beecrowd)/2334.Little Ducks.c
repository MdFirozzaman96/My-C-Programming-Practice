#include<stdio.h>
int main()
{
    unsigned long long int ducklings;
    while(scanf("%llu",&ducklings)!=-1)
    {
        if(ducklings==-1)
        {
            return 0;
        }
        else if(ducklings==0)
        {
            printf("0\n");
        }
        else
        {
            printf("%llu\n",ducklings-1);
        }
    }
    return 0;
}

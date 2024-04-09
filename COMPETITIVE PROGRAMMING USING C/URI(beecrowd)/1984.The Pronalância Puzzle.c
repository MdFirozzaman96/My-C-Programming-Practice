#include<stdio.h>
int main()
{
    long long int n;
    int mod,div;
    scanf("%llu",&n);
    while(n)
    {
        mod=n%10;
        printf("%d",mod);
        n=n/10;
    }
    printf("\n");
    return 0;
}

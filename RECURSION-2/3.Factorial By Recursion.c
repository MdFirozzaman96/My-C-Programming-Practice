#include<stdio.h>
int Fact(int x)
{
    if(x==1||x==0)
    {
        return 1;
    }
    return x*Fact(x-1);
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",Fact(x));
}

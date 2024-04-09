#include<stdio.h>
int main()
{
    int x,times=0;
    while(scanf("%d",&x)!=EOF)
    {
        x/=2;
        while(x!=0)
        {
            times+=1;
            x/=2;
        }
        printf("%d\n",times);
        times=0;
    }
    return 0;
}

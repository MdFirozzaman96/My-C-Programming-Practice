#include<stdio.h>
int Luck(int x)
{
    int div,mod;
    div=x;
    while(div!=0)
    {
        mod=div%10;
        if(mod!=4&&mod!=7)
        {
            return 100;
        }
        div=div/10;
    }
    return 130;
}
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        if(Luck(x)==130)
        {
            printf("sortudo\n");
        }
        else
        {
            if(x%4==0||x%7==0)
            {
                printf("quase sortudo\n");
            }
            else
            {
                printf("azarado\n");
            }
        }
    }
    return 0;
}

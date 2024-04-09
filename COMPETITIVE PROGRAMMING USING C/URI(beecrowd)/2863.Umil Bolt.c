#include<stdio.h>
int main()
{
    int i,t;
    float trials,fast=12;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            scanf("%f",&trials);
            if(trials<=fast)
            {
                fast=trials;
            }
        }
        printf("%0.2f\n",fast);
        fast=12;
    }
    return 0;
}

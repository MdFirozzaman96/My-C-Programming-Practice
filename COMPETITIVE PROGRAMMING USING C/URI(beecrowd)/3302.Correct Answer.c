#include<stdio.h>
int main()
{
    int i,t,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        printf("resposta %d: %d\n",i+1,x);
    }
    return 0;
}

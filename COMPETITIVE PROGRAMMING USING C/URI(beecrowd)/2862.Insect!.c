#include<stdio.h>
int main()
{
    int i,t,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x<=8000)
        {
            printf("Inseto!\n");
        }
        else
        {
            printf("Mais de 8000!\n");
        }
    }
    return 0;
}

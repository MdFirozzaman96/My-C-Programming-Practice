#include<stdio.h>
int main()
{
    int  p1,n1,n2,r,a,sum;
    scanf("%d%d%d%d%d",&p1,&n1,&n2,&r,&a);
    sum=n1+n2;
    if(p1==1&&sum%2==1||p1==0&&sum%2==0)
    {
        if(r==0&&a==0||r==1&&a==1)
        {
            printf("Jogador 2 ganha!\n");
        }
        else if(r==1&&a==0||r==0&&a==1)
        {
            printf("Jogador 1 ganha!\n");
        }
    }
    else if(p1==1&&sum%2==0||p1==0&&sum%2==1)
    {
        if(r==0&&a==0||r==1&&a==0||r==0&&a==1)
        {
            printf("Jogador 1 ganha!\n");
        }
        else if(r==1&&a==1)
        {
            printf("Jogador 2 ganha!\n");
        }
    }

    return 0;
}

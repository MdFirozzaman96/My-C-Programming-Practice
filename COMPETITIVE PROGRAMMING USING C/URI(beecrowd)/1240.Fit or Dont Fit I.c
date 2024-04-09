#include<stdio.h>

int num_len(int n)
{
    int i=0;
    while(n!=0)
    {
        n=n/10;
        i+=1;
    }
    return i;
}
int main()
{
    int i,t,x,y,Lx,Ly,test=1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&x,&y);
        Lx=num_len(x);
        Ly=num_len(y);
        if(Ly>Lx)
        {
            printf("nao encaixa\n");
        }
        else
        {
            while(Ly!=0)
            {
                if(y%10!=x%10)
                {
                    test=0;
                    break;
                }
                y/=10;
                x/=10;
                Ly-=1;
            }
            if(test==1)
            {
                printf("encaixa\n");
            }
            else
            {
                printf("nao encaixa\n");
            }
            test=1;
        }

    }
    return 0;
}

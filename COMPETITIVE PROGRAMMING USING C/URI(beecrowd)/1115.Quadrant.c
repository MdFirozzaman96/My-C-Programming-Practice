#include<stdio.h>
int main()
{
    int i,x,y,k=0;

    while(k==0)
    {
        scanf("%d%d",&x,&y);
        if(x<0&&y<0)
        {
            printf("terceiro\n");
        }
        else if(x>0&&y>0)
        {
            printf("primeiro\n");
        }
        else if(x<0&&y>0)
        {
            printf("segundo\n");
        }
        else if(x>0&&y<0)
        {
            printf("quarto\n");
        }
        else if(x==0||y==0)
        {
            k++;
        }
    }
    return 0;
}

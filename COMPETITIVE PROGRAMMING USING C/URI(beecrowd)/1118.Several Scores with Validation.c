#include<stdio.h>
int main()
{
    int i,j=0,X,k=0;
    float n,ave=0.0;
    for(i=0; ;i++)
    {
        scanf("%f",&n);
        if(n>=0.0&&n<=10.0)
        {
            k++;
            ave=ave+n;
            if(k==2)
            {
                ave=ave/2.0;
                printf("media = %0.2f\n",ave);
                while(j==0)
                {
                    scanf("%d",&X);
                    printf("novo calculo (1-sim 2-nao)\n");
                    if(X==1)
                    {
                        j++;
                    }
                    else if(X==2)
                    {
                        return 0;
                    }
                }
                j=0;
                k=0;
                ave=0.0;
            }
        }
        else
        {
            printf("nota invalida\n");
        }
    }
}

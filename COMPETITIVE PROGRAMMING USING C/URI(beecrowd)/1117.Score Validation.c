#include<stdio.h>
int main()
{
    int i,k=0;
    float x,ave=0.0;
    for(i=0;k<2;i++)
    {
        scanf("%f",&x);
        if(x>=0&&x<=10)
        {
            ave=ave+x;
            k++;
            if(k==2)
            {
               ave=ave/2.0;
               printf("media = %0.2f\n",ave);
            }
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    return 0;
}

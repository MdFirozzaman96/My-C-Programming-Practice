#include<stdio.h>
int main()
{
    int t,i,a,b,j=0,k;
    double ga,gb;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%lf%lf",&a,&b,&ga,&gb);
        k=0;
        j=0;
        while(j==0)
        {
            a=a+(ga*a)/100;
            b=b+(gb*b)/100;
            k++;
            if(k>100)
            {
                printf("Mais de 1 seculo.\n");
                j++;
            }
            else if(a>b)
            {
                j++;
            }
        }

        if(k<=100)
        {
            printf("%d anos.\n",k);
        }


    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,j,t;
    float x[7],dif,min,max,sum=0.0;
    char name[50];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s%f",name,&dif);
        for(j=0;j<7;j++)
        {
            scanf("%f",&x[j]);
            if(j==0)
            {
                min=x[j];
                max=x[j];
            }
            if(x[j]>max)
            {
                max=x[j];
            }
            if(x[j]<min)
            {
                min=x[j];
            }
        }
        for(j=0;j<7;j++)
        {
            if(x[j]!=max&&x[j]!=min)
            {
                sum=sum+x[j];
            }
        }
        printf("%s %0.2f\n",name,sum*dif);
        sum=0.0;
    }
    return 0;
}

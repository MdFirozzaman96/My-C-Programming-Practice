#include<stdio.h>
int main()
{
    int i,t,id,prod;
    float sum=0.00;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&id,&prod);
        if(id==1001)
        {
            sum=sum+prod*1.50;
        }
        else if(id==1002)
        {
            sum=sum+prod*2.50;
        }
        else if(id==1003)
        {
            sum=sum+prod*3.50;
        }
        else if(id==1004)
        {
            sum=sum+prod*4.50;
        }
        else
        {
            sum=sum+prod*5.50;
        }
    }
    printf("%0.2f\n",sum);
    return 0;
}

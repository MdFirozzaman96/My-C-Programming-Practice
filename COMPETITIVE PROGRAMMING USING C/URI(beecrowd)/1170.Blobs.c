#include<stdio.h>
int main()
{
    int i,t,count=0;
    float food;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%f",&food);
        while(food>1)
        {
            food=food/2;
            count+=1;
        }
        printf("%d dias\n",count);
        count=0;
    }
    return 0;
}

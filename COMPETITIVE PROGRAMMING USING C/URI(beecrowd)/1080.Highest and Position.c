#include<stdio.h>
int main()
{
    int n[100],i,top,pos,temp,heigh;
    heigh=0;
    top=heigh;
    for(i=0;i<100;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]>top)
        {
            heigh=n[i];
            top=heigh;
            pos=i+1;
        }
        else
        {
            heigh=top;
            temp=heigh;
            top=temp;
        }
    }
    printf("%d\n",top);
    printf("%d\n",pos);
    return 0;
}

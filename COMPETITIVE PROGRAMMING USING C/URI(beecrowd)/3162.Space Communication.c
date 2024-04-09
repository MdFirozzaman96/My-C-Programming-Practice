#include<stdio.h>
int main()
{
    int i,t,x,y,z,sub1,sub2,sub3,sub4,sub5,sub6;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        sub1=x-y;
        sub2=y-x;
        sub3=x-z;
        sub4=z-x;
        sub5=y-z;
        sub6=z-y;
        if(sub1>50||sub2>50||sub3>50||sub4>50||sub5>50||sub6>50)
        {
            printf("B\n");
        }
        else if(sub1<=20&&sub2<=20&&sub3<=20&&sub4<=20&&sub5<=20&&sub6<=20)
        {
            printf("A\n");
        }
        else
        {
            printf("M\n");
        }
    }
    return 0;
}

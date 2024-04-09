#include<stdio.h>
int main()
{
    int n,f1,f2,min,i,res,Min;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&f1,&f2);
        if(f1>f2)
        {
            min=f2;
        }
        else
        {
            min=f1;
        }
        for(i=1;i<=min;i++)
        {
            res=(min/i);
            Min=min-(i-1);
            if(f1%res==0&&f2%res==0||f1%Min==0&&f2%Min==0)
            {
                printf("%d\n",res);
                break;
            }
        }
    }
    return 0;
}

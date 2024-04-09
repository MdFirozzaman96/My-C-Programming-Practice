#include<stdio.h>
int main()
{
    int x,X=0,i,k=0,sum=0;
    while(X==0)
    {
        scanf("%d",&x);
        if(x==0)
        {
            return 0;
        }
        else if(x%2==0)
        {
            while(k!=5)
            {
                k++;
                sum=sum+x;
                x+=2;
            }
            printf("%d\n",sum);
            k=0;
            sum=0;
        }
        else
        {
            while(k!=5)
            {
                k++;
                if(k==1)
                {
                    x+=1;
                    sum=sum+x;
                }
                else
                {
                    x+=2;
                    sum=sum+x;
                }
            }
            printf("%d\n",sum);
            k=0;
            sum=0;
        }
    }
}

#include<stdio.h>
int main()
{

   unsigned int End=0,end=0,count=0,x,y,modX,modY,sum=0,carry=0;

    while(End!=130)
    {
        scanf("%ld%ld",&x,&y);
        if(x==0&&y==0)
        {
            return 0;
        }
        else
        {
            while(end!=130)
            {
                modX=x%10;
                modY=y%10;
                sum=modX+modY+carry;
                carry=0;
                if(sum>9)
                {
                    carry=sum/10;
                    count+=1;
                }
                x=x/10;
                y=y/10;
                if(x<=1&&y<=1)
                {
                    end=130;
                }
            }
            if(count==0)
            {
                printf("No carry operation.\n");
            }
            else if(count==1)
            {
                printf("1 carry operation.\n");
            }
            else
            {
                printf("%d carry operations.\n",count);
            }
            sum=0;
            count=0;
            end=0;
            carry=0;
        }
    }
}

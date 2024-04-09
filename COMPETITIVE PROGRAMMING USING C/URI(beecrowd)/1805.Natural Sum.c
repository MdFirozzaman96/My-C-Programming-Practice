#include<stdio.h>
int main()
{
    unsigned long long int i,x,y,sumX,sumY,sum;
    scanf("%llu%llu",&x,&y);
    /*if(x==y)
    {
        printf("%llu\n",(x+y));
    }
    else
    {*/
        x-=1;
        sumX=x*(x+1)/2;
        sumY=y*(y+1)/2;
        sum=sumY-sumX;
        printf("%llu\n",sum);
    //}
    return 0;
}

#include<stdio.h>
int main()
{
    double arr[12][12],ave,sum=0.0;
    int i,j,k=2,count=0;
    char ch;
    scanf("%c",&ch);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&arr[i][j]);
            if(i>6&&j>=(12-i)&&j<12-(i-k))
            {
                sum=sum+arr[i][j];
                count+=1;
            }
        }
        if(i>=7)
        {
            k+=2;
        }
    }
    if(ch=='S')
    {
        printf("%0.1lf\n",sum);
    }
    else if(ch=='M')
    {
        ave=sum/(count*1.0);
        printf("%0.1lf\n",ave);
    }
    return 0;
}

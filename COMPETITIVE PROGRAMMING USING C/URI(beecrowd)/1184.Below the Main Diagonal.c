#include<stdio.h>
int main()
{
    float arr[12][12],ave,sum=0.0;
    int i,j,count=0;
    char ch;
    scanf("%c",&ch);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&arr[i][j]);
            if(j<=(i-1)&&i>0)
            {
                sum=sum+arr[i][j];
                count+=1;
            }

        }
    }
    if(ch=='S')
    {
        printf("%0.1f\n",sum);
    }
    else if(ch=='M')
    {
        ave=sum/(count*1.0);
        printf("%0.1f\n",ave);
    }
    return 0;
}

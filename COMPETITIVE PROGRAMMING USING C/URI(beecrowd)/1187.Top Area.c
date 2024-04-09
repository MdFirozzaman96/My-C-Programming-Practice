#include<stdio.h>
int main()
{
    double arr[12][12],ave,sum=0.0;
    int i,j,count=0;
    char ch;

    scanf("%c",&ch);

    for(i=0;i<12;i++)
    {

        for(j=0;j<12;j++)
        {
            scanf("%lf",&arr[i][j]);
            if(j>=(i+1)&&j<12-(i+1))
            {
                sum=sum+arr[i][j];
                count+=1;
            }
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
/*1.1
2.2
2.2
2.2
1.1
1.1
1.1
2.2
1.1
1.1
1.1
1.1
1.1
1.1
1.1
1.1
1.1
1.1
1.1
1.1
1.1
1.1
1.1
1.1
1.1*/

#include<stdio.h>
int main()
{
    int i,j,x;
    float arr[12][12],ave,sum=0.0;
    scanf("%d",&x);
    char ch[2];
    scanf("%s",&ch);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&arr[i][j]);
            if(j==x)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    if(ch[0]=='S')
    {
        printf("%0.1f\n",sum);
    }
    else if(ch[0]=='M')
    {
         ave=sum/12.0;
         printf("%0.1f\n",ave);
    }
    return 0;
}

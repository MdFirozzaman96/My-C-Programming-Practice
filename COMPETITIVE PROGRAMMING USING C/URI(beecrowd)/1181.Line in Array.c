#include<stdio.h>
int main()
{
    int i,j,x;
    float arr[12][12],ave,sum=0.0;
    scanf("%d",&x);
    char ch[2];///ch[1] wrong answer because size 1 will be a character. It is not string.String has more than 1 character.
    scanf("%s",ch);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&arr[i][j]);
            if(i==x)
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

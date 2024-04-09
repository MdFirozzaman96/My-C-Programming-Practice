#include<stdio.h>
int main()
{
    int i,j,n;
    float wt,ave;
    ave=0.00;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%f",&wt);
            ave=ave+wt;
        }
        ave=ave/3.0;
        printf("%0.1f\n",ave);
    }
    return 0;
}

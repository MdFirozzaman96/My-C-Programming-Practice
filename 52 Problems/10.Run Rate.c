#include<stdio.h>
int main()
{
    int i,j,T,k,rr;
    double crr,Rest_over,Past_over,rrr;
    int arr[3];
    printf("Enter the number of test case : \n");
    scanf("%d",&T);
    if(T<=100)
    {
        for(i=0;i<T;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&arr[j]);
                if(arr[0]<=1000 && arr[1]<=1000 && arr[2]<=300)
                {
                    if(j==2)
                    {
                        Past_over = (double) (300-arr[2])*1.0/(6*1.0);
                        crr = (double) (arr[1]*1.0)/Past_over;
                        printf("%0.2f ",crr);

                        rr = arr[0]-arr[1]+1;
                        Rest_over = (double) (arr[2]*1.0)/(6*1.0);
                        rrr = (double) (rr*1.0)/Rest_over;
                        printf("%0.2f",rrr);
                    }
                }
            }
            printf("\n");
        }
    }
}

#include<stdio.h>
int main()
{
    int arr[7][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int i,j,sum=0;
    for(i=0;i<7;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",arr[i][j]);
            if(j==i)
            {
                sum=sum+arr[i][j];
            }
        }
        printf("Sum = %d\n",sum);
    }
}

#include<stdio.h>
int main()
{
    int arr[3][3],i,j;
    printf("Read a 3x3 matrix values : \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nDisplayed the 3x3 matrix : \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

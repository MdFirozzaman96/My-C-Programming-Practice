/// Two matrices can be multiplied with each other if the number of rows in the first
/// matrix is equal to the number of columns in the second matrix.

#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],P[3][3],i,j,k,sum=0;

    printf("Read the values of matrix A : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nMatrix A : \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n\n");
    }
    printf("\nRead the values of matrix B : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    printf("\nMatrix B : \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n\n");
    }
    printf("\nThe matrix P,After producing matrix A and B :   \n\n");
    for(k=0;k<3;k++)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                sum=sum+A[k][j]*B[j][i];
            }
            printf("%d\t",sum);
            sum=0;
        }
        printf("\n\n");
    }

    return 0;

}

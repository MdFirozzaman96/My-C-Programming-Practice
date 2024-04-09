/// Two matrices are said to be compatible when they have the same number of
/// rows and columns.

#include<stdio.h>
int main()
{
    int A[2][2],B[2][2],Sum[2][2],i,j;
    printf("Read the values of matrix A : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Matrix A : \n\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("\nRead the values of matrix B : \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    printf("\nMatrix B : \n\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C,The Sum of Matrix A and Matrix B : \n\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            Sum[i][j]=A[i][j]+B[i][j];
            printf("%d\t",Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

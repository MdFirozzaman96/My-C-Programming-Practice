#include<stdio.h>
int main()
{
    int A[2][2],B[2][2],Sub[2][2],i,j;

    printf("Enter 2x2 values of Matrix A : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nMatrix A : \n\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n\n");
    }

    printf("\nEnter 2x2 values of Matrix B : \n");
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
        printf("\n\n");
    }

    printf("\nMatrix Sub,After subtracting matrix A and B : \n\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            Sub[i][j]=A[i][j]-B[i][j];
            printf("%d\t",Sub[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}

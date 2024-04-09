#include<stdio.h>
int main()
{
    int A[3][3],i,j;
    printf("Read values of a 3x3 matrix : \n");
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
    printf("\nMatrix T After making it transpose : \n\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}

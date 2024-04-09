#include<stdio.h>
int main()
{
    int i,j,row,column,k,mul;
    printf("Enter The Number of Row : ");
    scanf("%d",&row);
    printf("Enter The Column Size : ");
    scanf("%d",&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

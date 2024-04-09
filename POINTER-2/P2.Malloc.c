#include<stdio.h>
#include<stdlib.h>
int main()
{
    //int num[]//It is wrong. Because it is not initialized.

    int *arr[5],num[5];
    int i,j,n;
    for(i=0;i<3;i++)
    {
        printf("Enter the number of selected student for class %d : ",i+1);
        scanf("%d",&n);
        arr[i] = (int*)calloc(n,sizeof(int));
        num[i]=n;
        if(arr[i]==NULL)
        {
            printf("Memory not allocated \n");
            return 1;
        }
        printf("Enter the roll number of the students: ");
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("All the students are : \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<num[i];j++)
        {
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }

}

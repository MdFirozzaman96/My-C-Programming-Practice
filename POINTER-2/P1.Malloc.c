#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *marks;
    int i,n;
    printf("Enter the number of students : \n");
    scanf("%d",&n);
    marks = (int *)malloc(sizeof(int)*n);
    printf("Enter the total marks of the students : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("print all marks of the students : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",marks[i]);
    }
    free(marks);

}

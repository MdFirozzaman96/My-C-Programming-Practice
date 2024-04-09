#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *marks;
    int i,n;
    printf("Enter the number of students : \n");
    scanf("%d",&n);
    marks = (int*) calloc(n,sizeof(int));
    if(marks==NULL)
    {
        printf("Memory allocation failed for marks\n");
        return 0;
    }
    /*printf("Enter all marks : \n");// Difference between malloc() and calloc() is calloc() initialize it's memory with zero where malloc() not.
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }*/
    printf("All the marks are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",marks[i]);
    }
    free(marks);
}

#include<stdio.h>
int main()
{
    int arr[3];
    int T,i,j,n,tmp,k;
    printf("Enter the number of test case : \n");
    scanf("%d",&T);
    if(T<=100)
    {
        for(i=0;i<T;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&arr[j]);
            }
            for(k=0;k<3;k++)
            {
                for(j=0;j<3;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        tmp=arr[j];
                        arr[j]=arr[j+1];/// Lower value remain here.
                        arr[j+1]=tmp;
                    }
                }
            }
            for(j=0;j<3;j++)
            {
                printf("%d ",arr[j]);
            }
            printf("\n");
        }
    }
}

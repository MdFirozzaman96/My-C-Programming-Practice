#include<stdio.h>
int main()
{
    float arr[100];
    int i;
    for(i=0;i<100;i++)
    {
        scanf("%f",&arr[i]);
        if(arr[i]<=10)
        {
            printf("A[%d] = %0.1f\n",i,arr[i]);
        }
    }
    return 0;
}

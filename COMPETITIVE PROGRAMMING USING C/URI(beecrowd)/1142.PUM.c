#include<stdio.h>
int main()
{
    int i,j,N,k=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<3;j++)
        {
            k++;
            printf("%d ",k);
        }
        k++;
        printf("PUM\n");
    }
    return 0;
}

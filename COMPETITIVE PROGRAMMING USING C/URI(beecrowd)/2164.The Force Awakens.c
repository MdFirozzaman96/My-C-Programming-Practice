#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==42&&arr[i][j-1]==7&&arr[i][j+1]==7&&arr[i+1][j-1]==7&&arr[i+1][j]==7&&arr[i+1][j+1]==7&&arr[i-1][j-1]==7&&arr[i-1][j]==7&&arr[i-1][j+1]==7)
            {
                printf("%d %d\n",(i+1),(j+1));
                return 0;
            }
        }
    }
    printf("0 0\n");
    return 0;
}




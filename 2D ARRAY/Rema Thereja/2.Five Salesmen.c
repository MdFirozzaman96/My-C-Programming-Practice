#include<stdio.h>
int main()
{
    int arr[5][3],i,j,sell=0,item_1=0,item_2=0,item_3=0;
    for(i=0;i<5;i++)
    {
        printf("Enter the sales of 3 items sold by salesman %d: ",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
            sell=sell+arr[i][j];
            if(j==0)
            {
                item_1=item_1+arr[i][j];
            }
            else if(j==1)
            {
                item_2=item_2+arr[i][j];
            }
            else
            {
                item_3=item_3+arr[i][j];
            }
        }
        printf("Total Sales By Salesman %d = %d\n",i+1,sell);
        sell=0;
    }
    printf("\nTotal sales of item 1 = %d\n",item_1);
    printf("Total sales of item 2 = %d\n",item_2);
    printf("Total sales of item 3 = %d\n",item_3);

    return 0;
}

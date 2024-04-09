#include<stdio.h>
int main()
{
    int arr[100],i,ht,pn,hp,sum,res=1;
    scanf("%d%d",&ht,&pn);
    for(i=0;i<pn;i++)
    {
        scanf("%d",&arr[i]);
        if(i>=1)
        {

            if(arr[i-1]<arr[i]&&sum<arr[i])
            {
                res=0;
            }
        }
        sum=ht+arr[i];
    }
    if(res==1)
    {
       printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }
    return 0;
}

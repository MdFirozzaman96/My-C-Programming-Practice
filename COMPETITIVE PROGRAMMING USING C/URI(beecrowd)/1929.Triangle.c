#include<stdio.h>

int main()
{
    int arr[4],i,sum,loc,tmp,big=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>big)
        {
            sum=arr[i];
            big=sum;
            loc=i;
        }
        else
        {
            sum=big;
            big=sum;
        }
    }
    for(i=0;i<4;i++)
    {
        if(i==loc)
        {
            while(loc!=4)
            {
                tmp=arr[loc];
                arr[loc]=arr[loc+1];
                arr[loc+1]=tmp;
                loc+=1;
            }
            loc-=1;
            break;
        }
    }
    if(arr[0]+arr[1]>big||arr[0]+arr[2]>big||arr[1]+arr[2]>big)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}

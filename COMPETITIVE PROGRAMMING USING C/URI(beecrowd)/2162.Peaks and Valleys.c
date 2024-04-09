#include<stdio.h>
int main()
{
    int arr[10001],i,lan,p=1,v=0;
    scanf("%d",&lan);
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<t;i++)
    {
        if(arr[i]>arr[i-1])
        {
            p+=1;
        }
        else
        {
            v+=1;
        }
    }
    if(p>v)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}

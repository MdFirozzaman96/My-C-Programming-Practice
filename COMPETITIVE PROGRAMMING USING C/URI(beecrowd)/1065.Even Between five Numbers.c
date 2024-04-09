#include<stdio.h>
int main()
{
    int even[5],i,count;
    count=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&even[i]);
        if(even[i]%2==0)
        {
            count=count+1;
        }
    }
    printf("%d valores pares\n",count);
    return 0;
}

#include<stdio.h>
int main()
{
    int i,k=1,n;
    scanf("%d",&n);
    for(i=n;k<=6;i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
                k++;
        }
    }
    return 0;
}

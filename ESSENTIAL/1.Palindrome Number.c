#include<stdio.h>
int main()
{
    int i,n,rest,mod;
    int arr[100];
    scanf("%d",&n);
    i=0;
    while(n>=10)
    {
        mod=n%10;
        arr[i]=mod;
        n=n/10;
        printf("%d",arr[i]);
        if(n<10)
        {
            printf("%d\n",n);
        }
        i+=1;
    }
}

#include<stdio.h>
int main()
{
    int arr[20],mod,i,k=0;
    long int n;
    scanf("%lu",&n);
    while(n)
    {
        mod=n%16;
        arr[k]=mod;
        k+=1;
        n=n/16;
    }
    for(i=k-1;i>=0;i--)
    {
        if(arr[i]<10)
        {
            printf("%d",arr[i]);
        }
        else if(arr[i]==10)
        {
            printf("A");
        }
        else if(arr[i]==11)
        {
            printf("B");
        }
        else if(arr[i]==12)
        {
            printf("C");
        }
        else if(arr[i]==13)
        {
            printf("D");
        }
        else if(arr[i]==14)
        {
            printf("E");
        }
        else if(arr[i]==15)
        {
            printf("F");
        }
    }
    printf("\n");
    return 0;
}

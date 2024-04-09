#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter a number : ");
    scanf("%d",&n);
    x=n&1;
    if(x==1)
    {
        printf("%d is a odd number\n",n);
    }
    else
    {
        printf("%d is a even number\n",n);
    }
}

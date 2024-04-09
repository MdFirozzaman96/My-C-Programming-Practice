#include<stdio.h>
int count=0;
int fib(int n)
{
    count = count+1;
    if(n==0)
    {
        return 0;
    }
    else if(n==1||n==2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
    printf("Number of calling of the function is : %d\n",count);
}
int main()
{
    int x;
    int Fib;
    printf("Enter %dth Term : \n",x);
    scanf("%d",&x);
    Fib = fib(x);
    printf("The %dth Term is %d \n",x,Fib);
    return 0;
}

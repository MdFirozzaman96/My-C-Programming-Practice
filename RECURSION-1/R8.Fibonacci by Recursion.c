#include<stdio.h>
#include<string.h>
int F_calls = 0;
int Fibonacci(int x)
{
    F_calls = F_calls + 1;
    if(x == 1 || x == 2)
    {
        return 1;
    }
    else
    {
        return Fibonacci(x-1)+Fibonacci(x-2);
    }
}
int main()
{
    int n;
    char s[3];
    printf("Enter any integer number : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Undefined\n");
    }
    else if(n==1)
    {
        strcpy(s,"st");
    }
    else if(n==2)
    {
        strcpy(s,"nd");
    }
    else if (n==3)
    {
        strcpy(s,"rd");
    }
    else
    {
        strcpy(s,"th");
    }
    printf("%d%s Fibonacci number is : %d\n",n,s,Fibonacci(n));
    printf("Number of function calls : %d\n",F_calls);
    return 0;
}

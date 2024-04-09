#include<stdio.h>
int F_calls = 0;
int Factorial(int x)
{
    F_calls = F_calls + 1;
    if(x == 0)
    {
        return 1;
    }
    else
    {
        return x * Factorial(x-1);
    }
}
int main()
{
    int n;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Undefined \n");
    }
    else
    {
        printf("The Factorial number of %d is %d\n",n,Factorial(n));
        printf("The number of calls of the Factorial function is %d\n",F_calls);
    }
    return 0;
}

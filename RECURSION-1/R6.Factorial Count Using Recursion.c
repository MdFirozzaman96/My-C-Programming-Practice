#include<stdio.h>
int Factorial(int N)
{
    if(N==0)
    {
        return 1;
    }
    else
    {
        return N*Factorial(N-1);
    }
}
int main()
{
    int N;
    printf("Enter A Number : ");
    scanf("%d",&N);
    if(N<0)
    {
        printf("Undefined\n");
    }
    else
    {
        printf("%d\n",Factorial(N));
    }
    return 0;
}

#include<stdio.h>

int f_calls=0;

int fact(int n)
{
    if(n == 0)
    {
        return 2;
    }
    f_calls = f_calls+1;
    //printf("%d ",f_calls);
    return n * fact(n-1);
    //f_calls = f_calls+1;
    //printf("%d ",f_calls);//Why is  it  showing empty output  ?
}

int main()
{
    int x;
    x = 5;
    printf("\nFactorial of %d is %d : \n",x,fact(x));
    printf("The number of function calls is : %d \n",f_calls);
    return 0;
}

#include<stdio.h>

long long fact(long long x)
{
    if(x==0)
    {
        return 1;
    }
    return x*fact(x-1);
}
int main()
{
    long long n,Factorial;
    long long ll;
    int i;
    double d;
    char c;
    float f;
    long l;
    printf("Size of different range of variable : \n");
    printf("Size of integer : %d\n",sizeof(i));
    printf("Size of double : %d\n",sizeof(d));
    printf("Size of character : %d\n",sizeof(c));
    printf("Size of float : %d\n",sizeof(f));
    printf("Size of long integer : %d\n",sizeof(l));
    printf("Size of long long integer : %d\n",sizeof(ll));

    printf("\nEnter an integer number : ");
    scanf("%d",&n);
    Factorial = fact(n);
    printf("The factorial of %d is : %llu \n",n,Factorial);
    return 0;
}

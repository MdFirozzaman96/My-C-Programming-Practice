#include<stdio.h>
int main()
{

    int arr[10];
    int n,remainder,quotient,i;
    i=1;
    printf("Enter a positive integer number : ");
    scanf("%d",&n);
    quotient=n;
    while(i!=0)
    {
        remainder = quotient%10;
        arr[i]=remainder;
        quotient = n/10;

        printf("%d\n",remainder);
        i++;
        if(quotient == 0)
        {
            i=quotient;
        }
    }
}

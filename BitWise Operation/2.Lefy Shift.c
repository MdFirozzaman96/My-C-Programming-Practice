#include<stdio.h>
int main()
{
    int x,left;
    while(1)
    {
        printf("Enter any number (0 to exit) : \n");
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        printf("Enter a number of bits that you want to shift : \n");
        scanf("%d",&left);
        x=x<<left;
        printf("After %d bits left, the number is : %d\n\n",left,x);
    }
}

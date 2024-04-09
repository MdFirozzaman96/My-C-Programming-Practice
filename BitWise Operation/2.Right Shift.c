#include<stdio.h>
int main()
{
    int x,right;
    while(1)
    {
        printf("Enter a number (0 to exit) : ");
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        printf("Enter a number which refers how many times you shift right the bits : ");
        scanf("%d",&right);
        x=x>>right;
        printf("After shifting %d times into right : %d\n",right,x);
    }

}

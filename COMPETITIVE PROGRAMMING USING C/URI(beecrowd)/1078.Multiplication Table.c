#include<stdio.h>
int main()
{
    int i,x,mul;
    scanf("%d",&x);
    for(i=0;i<10;i++)
    {
        mul=(i+1)*x;
        printf("%d x %d = %d\n",i+1,x,mul);
    }
    return 0;
}

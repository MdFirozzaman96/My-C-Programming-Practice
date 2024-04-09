#include<stdio.h>
int recursion()
{
    static int x=1;
   // scanf("%d",&x);
    if(x>10)
    {
        return;
    }
    x+=1;
    printf("%d\n",x);
    recursion();
}
int main()
{
    recursion();
}

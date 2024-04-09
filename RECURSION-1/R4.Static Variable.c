#include<stdio.h>
void recurse()
{
    static int x = 1;
    if(x>5)
    {
        return;
    }
    printf("x = %d\n",x);
    x=x+1;
    recurse();
    //printf("x = %d\n",x);
}
int main()
{
    recurse();
    return 0;
}

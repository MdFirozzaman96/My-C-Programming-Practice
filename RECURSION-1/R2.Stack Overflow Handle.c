#include<stdio.h>
/*void recurse(int x)
{
    if(x<=5)
    {
        printf("Alhamdulilllh,I am learning recursion !\n");
    }
    x=x+1;
    recurse(x);
}*/

void recurse(int x)
{
    if(x==5)
    {
        return;
    }
    printf("Alhamdulilllh,I am learning recursion !\n");
    recurse(x+1);
}

int main()
{
    recurse(1);
    return 0;
}

#include<stdio.h>
void C(int z)
{
    A(6);
    printf("z = %d\n",z);
}

void B(int y)
{
    C(4);
    printf("y = %d\n",y);
}

void A(int x)
{
    B(2);
    printf("x = %d\n",x);
}

int main()
{
    C(6);
    return 0;
}

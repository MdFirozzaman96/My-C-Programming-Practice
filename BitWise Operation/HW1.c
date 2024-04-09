#include<stdio.h>
int main()
{
    int a=15,b=12,c;
    a=a<<4;
    a=~a;
    a=a+1;
    b=~b;
    b=b+1;
    b=~b;
    c=a|b;
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);

}

#include<stdio.h>
int main()
{
    float a,b,s,inc;
    scanf("%f%f",&a,&b);
    if(b>a)
    {
        s=b-a;
        inc=(s*100.00)/a;
        printf("%0.2f%%\n",inc);
    }
    else
    {
        printf("0.00%%\n");
    }
    return 0;
}

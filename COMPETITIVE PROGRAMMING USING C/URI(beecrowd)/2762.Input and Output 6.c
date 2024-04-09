#include<stdio.h>
int main()
{
    float x,N,n1,A=3309492.20432,res;
    int n,B=3309492;
    res=A-B*1.0;
    printf("res = %0.5f\n",res);
    scanf("%f",&x);
    n=(int)x;
    printf("n=%d\n",n);
    n1=(float)n;
    N=x-n1;
    printf("%0.3f\n",N);
}

#include<stdio.h>
int main()
{
    float vol,dim,height,area;
    while(scanf("%f%f",&vol,&dim)!=EOF)
    {
        area=(3.14*dim*dim)/4.00;
        height=vol/area;
        printf("ALTURA = %0.2f\nAREA = %0.2f\n",height,area);
    }
    return 0;
}

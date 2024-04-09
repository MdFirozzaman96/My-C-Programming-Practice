#include<stdio.h>
int main()
{
    float s=0.0;
    int i,k=1;
    for(i=0;i<100;i++)
    {
        s=(float)(k*1.0)/(i+1)*1.0+s;
    }
    printf("%0.2f\n",s);
    return 0;
}

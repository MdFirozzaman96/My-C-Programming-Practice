#include<stdio.h>
int main()
{
    int i,x=0;
    long long int y=0;
    float S=0.0;
    for(i=1;x<39;i++)
    {
        if(i==1)
        {
            x=1;
            y=1;
            S=(float)(S+(x*1.0/y*1.0));
        }
        else
        {
            x=(x+2);
            y=2*y;
            S=(float)(x*1.0)/(y*1.0)+S;
        }
    }
    printf("%0.2f\n",S);
    return 0;
}

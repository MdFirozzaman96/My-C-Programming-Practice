#include<stdio.h>
int main()
{
    int x=0,k=0,ave=0;
    float age=0.0;
    while(x>=0)
    {
        ave=ave+x;
        scanf("%d",&x);
        if(x>=0)
        {
            k++;
        }
    }
    age=(float)(ave*1.0)/(k*1.0);
    printf("%0.2f\n",age);
    return 0;
}

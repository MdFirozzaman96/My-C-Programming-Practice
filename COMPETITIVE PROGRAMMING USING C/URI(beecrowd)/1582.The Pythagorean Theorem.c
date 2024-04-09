#include<stdio.h>
int main()
{
    int x,y,z;
    while(scanf("%d%d%d",&x,&y,&z)!=EOF)
    {
        if(x*x==y*y+z*z||y*y==x*x+z*z||z*z==x*x+y*y)
        {

        }
        else
        {
            printf("tripla\n");
        }
    }
}

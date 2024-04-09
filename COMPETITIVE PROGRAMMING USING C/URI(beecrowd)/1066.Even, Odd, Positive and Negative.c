#include<stdio.h>
int main()
{
    int x,p=0,n=0,e=0,o=0,i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x);
        if(x<0)
        {
            n++;
            x=-(2*x)+x;
            if(x%2==1)
            {
                o++;
            }
            else if(x%2==0)
            {
                e++;
            }
        }
        else if(x==0)
        {
            e++;
        }
        else
        {
            p++;
            if(x%2==1)
            {
                o++;
            }
            else if(x%2==0)
            {
                e++;
            }
        }
    }
    /// impar means ODD !!
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);

    return 0;
}

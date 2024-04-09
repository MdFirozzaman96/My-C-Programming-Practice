#include<stdio.h>
int main()
{
    int i,t,n,a=0,b=0,c=0,d=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            a+=1;
        }
        if(n%3==0)
        {
            b+=1;
        }
        if(n%4==0)
        {
            c+=1;
        }
        if(n%5==0)
        {
            d+=1;
        }
    }
    printf("%d Multiplo(s) de 2\n",a);
    printf("%d Multiplo(s) de 3\n",b);
    printf("%d Multiplo(s) de 4\n",c);
    printf("%d Multiplo(s) de 5\n",d);
    return 0;
}

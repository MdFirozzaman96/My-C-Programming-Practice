#include<stdio.h>
int main()
{
    int a,b,q,r,m;

    scanf("%d%d",&a,&b);
    if(b>0&&a>0)
    {
        q=a/b;
        r=a%b;
        printf("%d %d\n",q,r);
    }
    else if(b<0&&a>0)
    {
        q=a/b;
        m=q*b;
        r=a-m;
        b=-(2*b)+b;
        /*if(r==b)
        {
            r-=1;
        }*/
        printf("%d %d\n",q,r);
    }
    else if(a<0&&b>0)
    {
        q=a/b;
        q-=1;
        m=q*b;
        r=a-m;
        /*if(r==b)
        {
            r-=1;
        }*/
        printf("%d %d\n",q,r);
    }
    else if(a<0&&b<0)
    {
        q=a/b;
        q+=1;
        m=b*q;
        r=a-m;
        b=-(2*b)+b;
        /*if(r==b)
        {
            r-=r;
        }*/
        printf("%d %d\n",q,r);
    }
    return 0;
}

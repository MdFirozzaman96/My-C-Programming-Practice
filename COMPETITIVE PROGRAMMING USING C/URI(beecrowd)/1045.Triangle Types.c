#include<stdio.h>

void Triangle(double a,double b,double c)
{
   if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }

    else if(a*a==b*b+c*c)
    {
        printf("TRIANGULO RETANGULO\n");
        if(a==b&&a==c&&b==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a==b||a==c||b==c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    else if(a*a>b*b+c*c)
    {
        printf("TRIANGULO OBTUSANGULO\n");
        if(a==b&&a==c&&b==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a==b||a==c||b==c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    else if(a*a<b*b+c*c)
    {
        printf("TRIANGULO ACUTANGULO\n");
        if(a==b&&a==c&&b==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a==b||a==c||b==c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}


int main()
{

    double x,y,z,a,b,c;
    scanf("%lf%lf%lf",&x,&y,&z);
    if(x>y&&x>z)
    {
       a=x;
       if(y>z)
       {
           b=y;
           c=z;
       }
       else
       {
           b=z;
           c=y;
       }
    }
    else if(y>x&&y>z)
    {
        a=y;
        if(x>z)
        {
            b=x;
            c=z;
        }
        else
        {
            b=z;
            c=x;
        }
    }
    else if(z>x&&z>y)
    {
        a=z;
        if(x>y)
        {
            b=x;
            c=y;
        }
        else
        {
            b=y;
            c=x;
        }

    }
    else if(x==y)
    {
        a=x;
        b=y;
        c=z;
    }
    else if(x==z)
    {
        a=x;
        b=z;
        c=y;
    }
    else if(y==z)
    {
        a=y;
        b=z;
        c=x;
    }
    else if(x==y&&x==z&&y==z)
    {
        a=x;
        b=y;
        c=z;
    }
    Triangle(a,b,c);
    return 0;

 }

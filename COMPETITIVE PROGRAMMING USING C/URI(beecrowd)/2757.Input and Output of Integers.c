#include<stdio.h>
int main()
{
    int a,b,c,i,A,B,C,A1,B1,C1,d1=0,d2=0,d3=0;

    scanf("%d%d%d",&a,&b,&c);
    A=a;
    B=b;
    C=c;
    A1=a;
    B1=b;
    C1=c;
    while(A!=0)
    {
        A/=10;
        d1+=1;
    }
    while(B!=0)
    {
        B/=10;
        d2+=1;
    }
    while(C!=0)
    {
        C/=10;
        d3+=1;
    }
    printf("A = %d, B = %d, C = %d\n",a,b,c);

    d1=10-d1;
    d2=10-d2;
    d3=10-d3;

    printf("A = ");
    if(a<0)
    {
        for(i=0;i<d1-1;i++)
        {
            printf(" ");
        }
        printf("%d, ",a);
    }
    else
    {
        for(i=0;i<d1;i++)
        {
            printf(" ");
        }
        printf("%d, ",a);
    }


    printf("B = ");
    if(b<0)
    {
        for(i=0;i<d2-1;i++)
        {
            printf(" ");
        }
        printf("%d, ",b);
    }
    else
    {
        for(i=0;i<d2;i++)
        {
            printf(" ");
        }
        printf("%d, ",b);
    }

    printf("C = ");
    if(c<0)
    {
        for(i=0;i<d3-1;i++)
        {
            printf(" ");
        }
        printf("%d\n",c);
    }
    else
    {
        for(i=0;i<d3;i++)
        {
            printf(" ");
        }
        printf("%d\n",c);
    }

    printf("A = ");
    if(a<0)
    {
        printf("-");
        a=-(2*a)+a;
        for(i=0;i<d1-1;i++)
        {
            printf("0");
        }
    }
    else
    {
        for(i=0;i<d1;i++)
        {
            printf("0");
        }
    }
    printf("%d,",a);
    printf(" B = ");
    if(b<0)
    {
        printf("-");
        b=-(2*b)+b;
        for(i=0;i<d2-1;i++)
        {
            printf("0");
        }
    }
    else
    {
        for(i=0;i<d2;i++)
        {
            printf("0");
        }
    }
    printf("%d,",b);

    printf(" C = ");
    if(c<0)
    {
        printf("-");
        c=-(2*c)+c;
        for(i=0;i<d3-1;i++)
        {
            printf("0");
        }
    }
    else
    {
        for(i=0;i<d3;i++)
        {
            printf("0");
        }
    }
    printf("%d\n",c);

    printf("A = %d",A1);
    if(A1<0)
    {
        for(i=0;i<d1-1;i++)
        {
            printf(" ");
        }
        printf(", ");
    }
    else
    {
        for(i=0;i<d1;i++)
        {
            printf(" ");
        }
        printf(", ");
    }

    printf("B = %d",B1);
    if(B1<0)
    {
        for(i=0;i<d2-1;i++)
        {
            printf(" ");
        }
        printf(", ");
    }
    else
    {
        for(i=0;i<d2;i++)
        {
            printf(" ");
        }
        printf(", ");
    }

    printf("C = %d",C1);
    if(C1<0)
    {
        for(i=0;i<d3-1;i++)
        {
            printf(" ");
        }
        printf(", ");
    }
    else
    {
        for(i=0;i<d3;i++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

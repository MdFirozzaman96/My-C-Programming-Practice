#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,sq1,sq2;
    scanf("%f%f%f",&a,&b,&c);
    sq1=(-b+sqrt((b*b)-4*a*c))/(2.0*a);
    sq2=(-b-sqrt((b*b)-4*a*c))/(2.0*a);
    if(((b*b)-4*a*c)<0||a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %0.5f\nR1 = %0.5f\n",sq1,sq2);
    }
    return 0;
}

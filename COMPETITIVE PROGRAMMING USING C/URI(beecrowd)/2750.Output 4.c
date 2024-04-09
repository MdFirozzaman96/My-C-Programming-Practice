#include<stdio.h>
int main()
{
    int a0=0,a1=1,a2=2,a3=3,a4=4,a5=5,a6=6,a7=7,a8=8,a9=9,a10=10,a11=11,a12=12,a13=13,a14=14,a15=15;
    printf("---------------------------------------\n");
    printf("|  decimal  | octal   |  Hexadecimal  |\n");
    printf("---------------------------------------\n");
    printf("|      %d    |    %d    |       %d       |\n",a0,a0,a0);
    printf("|      %d    |    %d    |       %d       |\n",a1,a1,a1);
    printf("|      %d    |    %d    |       %d       |\n",a2,a2,a2);
    printf("|      %d    |    %d    |       %d       |\n",a3,a3,a3);
    printf("|      %d    |    %d    |       %d       |\n",a4,a4,a4);
    printf("|      %d    |    %d    |       %d       |\n",a5,a5,a5);
    printf("|      %d    |    %d    |       %d       |\n",a6,a6,a6);
    printf("|      %d    |    %d    |       %d       |\n",a7,a7,a7);
    printf("|      %d    |   %d    |       %d       |\n",a8,a8+2,a8);
    printf("|      %d    |   %d    |       %d       |\n",a9,a11,a9);
    printf("|     %d    |   %d    |       A       |\n",a10,a12);
    printf("|     %d    |   %d    |       B       |\n",a11,a13);
    printf("|     %d    |   %d    |       C       |\n",a12,a14);
    printf("|     %d    |   %d    |       D       |\n",a13,a15);
    printf("|     %d    |   %d    |       E       |\n",a14,a15+1);
    printf("|     %d    |   %d    |       F       |\n",a15,a15+2);
    printf("---------------------------------------\n");

    return 0;
}

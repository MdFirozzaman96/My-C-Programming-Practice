#include<stdio.h>
int main()
{
    char a[2],b[2],c[2];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    printf("A = %s, B = %s, C = %s\n",a,b,c);
    printf("A = %s, B = %s, C = %s\n",b,c,a);
    printf("A = %s, B = %s, C = %s\n",c,a,b);
    return 0;
}

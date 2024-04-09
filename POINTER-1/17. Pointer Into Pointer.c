#include<stdio.h>
int main()
{
    char **q,*p;
    char Name = 'G';
    p = &Name;
    q = &p;
    printf("Value of Name : %c\n",Name);
    printf("Value of Name : %c\n",*p);
    printf("Value of Name : %c\n",**q);
    return 0;
}

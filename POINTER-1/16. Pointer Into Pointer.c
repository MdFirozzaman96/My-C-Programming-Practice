#include<stdio.h>
int main()
{
    char Name = 'F';
    char *p;
    p = &Name;
    printf("Value of 'Name' : %c\n",Name);
    printf("Address of Name : %p\n",&Name);
    printf("Value of *p : %c\n",*p);
    printf("Value of p : %p\n",p);
    printf("Address of p (Address of Pointer) : %p\n",&p);
    return 0;

}

#include<stdio.h>
int main()
{
    char ch = 'Z';
    //static char ch = 'Z'; Comment out and run.
    char **q,*p;
    p = &ch;
    q = &p;
    **q = 'B';
    printf("Value of ch : %c\n",ch);
    printf("Value of ch : %c\n",*p);
    printf("Value of ch : %c\n",**q);
    return 0;
}

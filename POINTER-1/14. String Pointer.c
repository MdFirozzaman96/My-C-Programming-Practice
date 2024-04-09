#include<stdio.h>
int main()
{
    char *p; char ch = 'B';
    /*char *p; char ch[] = "Bangladesh";
    p = ch;*/
    p = &ch;// Incompatible pointer type because we hold integer type into character type.
    /*printf("Name of our country : %s\n",ch);
    printf("Name of our country : %s\n",*p);
    printf("Address of our country : %p\n",p);
    printf("Address of our country : %p\n",&ch);
    printf("Address of second character of our 'Bangladesh' : %p\n",ch[1]);
    printf("Address of second character of our 'Bangladesh' : %p\n",ch[2]);
     printf("Address of second character of our 'Bangladesh' : %p\n",ch[3]);*/
     printf("Name of our country : %c\n",*p);
    return 0;
}

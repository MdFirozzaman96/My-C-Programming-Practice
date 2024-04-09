#include<stdio.h>
void recurse()
{
    char *s = "Alhamdulilllh,I am learning recursion !";
    printf("%s\n",s);
    recurse();
}
int main()
{
    recurse();
    return 0;
}

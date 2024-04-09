#include<stdio.h>
char str[40];
int Strlen(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i+=1;
    }
    return i;
}
void recursion(int i)
{
    if(i>Strlen(str))
    {
        return;
    }
    //printf("I am learning recursion !\n");
    //printf("%c",str[i]);
    recursion(i+1);
   // printf("%d\n",i);
    printf("%c",str[i]);
}
int main()
{
    int i;
    printf("Enter your name : \n");
    gets(str);
    recursion(0);
}

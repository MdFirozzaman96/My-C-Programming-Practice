#include<stdio.h>
int main()
{
    int i,t;
    char ch[]="Ho";
    scanf("%d",&t);
    for(i=0;i<t-1;i++)
    {
        printf("%s ",ch);
    }
    printf("Ho!\n");
    return 0;
}

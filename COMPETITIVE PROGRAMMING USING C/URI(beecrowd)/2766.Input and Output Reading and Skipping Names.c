#include<stdio.h>
int main()
{
    int i;
    char str[10][35];
    for(i=0;i<10;i++)
    {
        scanf("%s",str[i]);
    }
    printf("%s\n%s\n%s\n",str[2],str[6],str[8]);
    return 0;
}

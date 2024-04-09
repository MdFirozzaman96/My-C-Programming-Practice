#include<stdio.h>
int main()
{
    int i,x,password=2002;
    for(i=0;;i++)
    {
        scanf("%d",&x);
        if(x==password)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}

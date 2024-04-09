#include<stdio.h>
int main()
{
    int hr,min,xmin,late;
    char ch;
    while(scanf("%d%c%d",&hr,&ch,&min)!=EOF)
    {
        late=(min+60);
        xmin=late-60;
        late=late/60;
        hr=hr+late;
        if(hr<=7)
        {
            printf("Atraso maximo: 0\n");
        }
        else
        {
            if(hr>8)
            {
                hr=(hr-8)*60;
                printf("Atraso maximo: %d\n",(hr+xmin));
            }
            else
            {
                printf("Atraso maximo: %d\n",xmin);
            }
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int T,x,i;
    char n[101];
    scanf("%d",&T);
    if(1<=T<=100)
    {
        for(i=0;i<T;i++)
        {
            scanf("%s",&n);
            x = atoi(n);
            if(1<=x)
            {
                if(x%2==0)
                {
                    printf("even\n");
                }
                else
                {
                    printf("odd\n");
                }
            }

        }
    }

}

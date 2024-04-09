#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    int n[T];
    if(1<=T<=100)
    {
        for(i=0;i<T;i++)
        {
            scanf("%d",&n[i]);
            if(n[i]%2==0)
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


/*#include<stdio.h>
int main()
{
    int i,n,T;
    scanf("%d",&T);
    if(1<=T<=100)
    {
        for(i=0;i<T;i++)
        {
            scanf("%d",&n);
            if(n%2==0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }
}*/

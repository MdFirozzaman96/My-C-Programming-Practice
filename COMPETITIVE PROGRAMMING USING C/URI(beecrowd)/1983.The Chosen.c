#include<stdio.h>
int main()
{
    int i,n,id,x1,k=0;
    float note,x2=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%f",&id,&note);
        if(note>=8.0)
        {
            if(note>x2)
            {
                x1=id;
                x2=note;
            }
            k++;
        }
    }
    if(k>=1)
    {
        printf("%d\n",x1);
    }
    else
    {
        printf("Minimum note not reached\n");
    }
    return 0;
}

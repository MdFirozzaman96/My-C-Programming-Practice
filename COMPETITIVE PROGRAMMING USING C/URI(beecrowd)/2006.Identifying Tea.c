#include<stdio.h>
int main()
{
    int i,type,Ci,count=0;
    scanf("%d",&type);
    for(i=0;i<5;i++)
    {
        scanf("%d",&Ci);
        if(Ci==type)
        {
            count+=1;
        }
    }
    printf("%d\n",count);
    return 0;
}

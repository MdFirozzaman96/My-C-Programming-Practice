#include<stdio.h>
int main()
{
    float pos[6];
    int i,count;
    count=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&pos[i]);
        {
            if(pos[i]>-1&&pos[i]>0)
            {
                count+=1;
            }
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}

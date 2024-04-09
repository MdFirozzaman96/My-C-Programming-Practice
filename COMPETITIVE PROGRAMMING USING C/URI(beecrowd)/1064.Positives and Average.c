#include<stdio.h>
int main()
{
    float pos[6];
    int i,count;
    float ave=0;
    count=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&pos[i]);
        {
            if(pos[i]>-1&&pos[i]>0)
            {
                count+=1;
                ave=ave+pos[i];
            }
        }
    }
    printf("%d valores positivos\n",count);
    count=(float)count;
    ave=ave/count;
    printf("%0.1f\n",ave);
    return 0;
}

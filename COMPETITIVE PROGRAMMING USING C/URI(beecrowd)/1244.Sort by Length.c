#include<stdio.h>
int main()
{
    int seq[50],i,j,tmp,count=0,k=0;
    char str[2500];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count+=1;
        if(str[i]==' '||str[i+1]=='\0')
        {
            seq[k]=count-1;
            printf("%d ",count-1);
            count=0;
            k+=1;
        }
    }
    printf("\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<k-(i+1);j++)
        {
            if(seq[j]<seq[j+1])
            {
                tmp=seq[j];
                seq[j]=seq[j+1];
                seq[j+1]=tmp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",seq[i]);
    }
}

#include<stdio.h>
int Strlen(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i+=1;
    }
    return i;
}
int main()
{
    int i,t,n,j,k,len,percent,present=0,count=0;
    char name[110][60],att[110][60];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%s",name[j]);
        }
        ///printf("len = %d,%d,%c\n",Strlen(name[0]),Strlen(name[1]),name[0][2]);
        for(j=0;j<n;j++)
        {
            scanf("%s",att[j]);
        }
        for(j=0;j<n;j++)
        {
            len=Strlen(att[j]);
            for(k=0;k<len;k++)
            {
               ///printf("%c\n",att[j][k]);
               if(att[j][k]=='P')
               {
                   present+=1;
               }
               else if(att[j][k]=='M')
               {
                   len-=1;
               }
            }
            percent=(present*100)/len;
            if(percent<75)
            {
                count+=1;
                if(j==0||count==1)
                {
                    printf("%s",name[j]);
                }
                else
                {
                    printf(" %s",name[j]);
                }
                ///printf("%s ",name[j]);
            }
            present=0;
        }
        printf("\n");
        count=0;
    }
    return 0;
}

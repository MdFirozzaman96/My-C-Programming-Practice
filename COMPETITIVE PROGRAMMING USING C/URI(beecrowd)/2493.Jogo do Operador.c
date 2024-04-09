#include<stdio.h>
/*int len(int arr[])
{
    int i=0;
    arr[i]=

}*/
int main()
{
    int x[50],y[50],res[50],ex,i,t,k,R;
    char name[50],op,ch;
    scanf("%s%d",name,&ex);
    scanf("%c",&op);
    if(op=='+')
    {
                //k=1;
                R=5+3;
                printf("R = %d\n",R);
    }
    else if(op=='-')
    {
        R=10-9;
        printf("R = %d\n",R);
    }
    else if(op=='*')
    {
        R=10*10;
        printf("R = %d\n",R);
    }
    else
    {
        printf("MD.Firozzaman Sarkar\n");
    }
    /*while(scanf("%d",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            scanf("%d%d%c%d",&x[i],&y[i],&ch,&res[i]);
        }
        for(i=0;i<t;i++)
        {
            scanf("%s%d%c",name,&ex,&op);
            if(op=='+')
            {
                //k=1;
                R=5+3;
                printf("%d\n",R);
            }
            /*else if(op=='-'&&(x[ex-1]-y[ex-1])==res[ex-1])
            {
                k=1;
                printf("Alhamdulillah\n");
            }
            else if(op=='*'&&(x[ex-1]*y[ex-1])==res[ex-1])
            {
                k=1;
                printf("Alhamdulillah\n");
            }
            else
            {
                //printf("%s")
                printf("Inshaallah\n");
                k=0;
            }
        }
   }*/
}

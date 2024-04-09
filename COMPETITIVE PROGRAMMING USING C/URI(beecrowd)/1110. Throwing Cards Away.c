/***~~~ALLAH IS ALMIGHTY~~~***/

#include<stdio.h>
#define Max 100

int Throwing_Cards_Away(int queue[],int n)
{
    int i=0,j=n;
    printf("Discarded cards: ");
    while(i<j)
    {
        printf("i : %d , j : %d\n",i,j);
        if((i+1)<j)
        {
            printf("%d, ",queue[i]);
        }
        else
        {
            printf("%d\n",queue[i]);
        }
        queue[j]=queue[i+1];
        i+=2;
        j+=1;
        //printf("i : %d , j : %d\n",i,j);
    }
    return queue[j-1];
}
int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            return 0;
        }
        else if(n==1)
        {
            printf("Discarded cards: 1\n");
            printf("Remaining card: 0\n");
        }
        else
        {
            int queue[Max];
            for(int i=0;i<n;i++)
            {
                queue[i]=(i+1);
            }
            printf("Remaining card: \n",Throwing_Cards_Away(queue,n));
        }
    }
    return 0;
}

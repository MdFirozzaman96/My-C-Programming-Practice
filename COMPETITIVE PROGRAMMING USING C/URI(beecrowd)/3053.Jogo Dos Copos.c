#include<stdio.h>
int main()
{
    int i,n,x,sum=0,count=0;
    char Ch[]="ABC";
    char ch[2];
    scanf("%d%s",&n,ch);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    if(ch[0]=='A')
    {
        count=1;
    }
    else if(ch[0]=='B')
    {
        count=2;
    }
    else if(ch[0]=='C')
    {
        count=3;
    }
    for(i=0;i<sum;i++)
    {
        if(count==3)
        {
            count=1;
        }
        else
        {
            count+=1;
        }
    }
    printf("%c\n",Ch[count-1]);
    return 0;
}

#include<stdio.h>
#define Max 1000
int top=-1;
char stack[Max];
void push(char ch)
{
    top+=1;
    stack[top]=ch;
}
void pop()
{
    top-=1;
    return top;
}
int main()
{
    int i,j,t,count=0;
    char str[Max];
    scanf("%d",&t);
    for(i=0;i<t+1;i++)
    {
        gets(str);/// when i will be 1 increment then gets() execute.
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]=='<')
            {
                push(str[j]);
            }
            else if(str[j]=='>'&&stack[top]=='<')
            {
                pop();
                count+=1;
            }
        }
        if(i>=1)
        {
            printf("%d\n",count);
            count=0;
            top=-1;
        }
        /// >...<<><>..<<<..<......<<<<....>
    }

    return 0;
}

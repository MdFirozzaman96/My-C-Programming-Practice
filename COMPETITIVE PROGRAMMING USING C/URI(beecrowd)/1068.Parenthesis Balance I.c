#include<stdio.h>
#define max 1010
int main()
{
    char str[max],stk[max];
    int i,k;
    while(scanf("%s",str)!=EOF)
    {
        k=0;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='(')
            {
                str[k]='(';
                k+=1;
            }
            else if(str[i]==')')
            {
                if(k==0)
                {
                    k=1;
                    break;
                }
                else
                {
                    k-=1;
                }
            }
        }
        if(k==0)
        {
            printf("correct\n");
        }
        else
        {
            printf("incorrect\n");
        }
    }
    return 0;
}

/*
(((()()))
(()))(
((((()())))()
((((()())))())
 */



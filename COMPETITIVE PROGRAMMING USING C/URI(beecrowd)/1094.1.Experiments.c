#include<stdio.h>
int test(char ch[])
{
    if(ch==" C")
    {
        return 1;
    }
    else if(ch==" R")
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main()
{
    int i,n,val,C,R,S,total;
    char ch[2];
    scanf("%d",&n);
    C=0;
    R=0;
    S=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&val);
        scanf("%s",&ch);
        if(test(ch)==1)
        {
           C=C+val;
        }
        else if(test(ch)==2)
        {
            R=R+val;
        }
        else if(test(ch)==3)
        {
            S=S+val;
        }

    }
    total=C+S+R;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
}

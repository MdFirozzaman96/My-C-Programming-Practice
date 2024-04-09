#include<stdio.h>
#include<string.h>
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
        if(strcmp(ch," C")==0)
        {
           C=C+val;
        }
        else if(strcmp(ch," R")==0)
        {
            R=R+val;
        }
        else if(strcmp(ch," S")==0)
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

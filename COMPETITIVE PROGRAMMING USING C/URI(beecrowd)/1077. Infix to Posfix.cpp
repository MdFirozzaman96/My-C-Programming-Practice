#include<iostream>
using namespace std;

int len(string str)
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
    int t,k;
    string expr,stck;
    cin>>t;
    while(t--)
    {
        cin>>expr;
        int ln=len(expr);
        expr[ln]=')';
        k=0;
        stck[k]='(';
        for(int i=0;expr[i]!='\0';i++)
        {
            if(expr[i]=='+'||expr[i]=='-'||expr[i]=='*'||expr[i]=='/'||expr[i]=='%'||expr[i]=='^'||expr[i]=='(')
            {
                if(stck[k]=='/'||stck[k]=='*'||stck[k]=='%'&&expr[i]=='+'||expr[i]=='-')/// (A*2+c-d)/2
                {
                    cout<<stck[k];
                    stck[k]=expr[i];
                }
                else
                {
                    k+=1;
                    stck[k]=expr[i];
                }
            }
            else if(expr[i]==')')
            {
                while(stck[k]!='(')
                {
                    cout<<stck[k];
                    k-=1;
                }
                k-=1;
            }
            else
            {
                cout<<expr[i];
            }
        }
    }
    return 0;
}

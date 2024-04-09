/***~~~ALLAH IS ALMIGHTY~~~***/

#include<bits/stdc++.h>
using namespace std;

int Fib(int n)
{
    if(n<=2)
    {
        return 1;
    }
    else
    {
        long long int fib;
        int prv1=1,prv2=1;
        for(int i=3;i<=n;i++)
        {
            fib=(prv1+prv2);
            prv1=prv2;
            prv2=fib;
        }
        return fib;
    }
}
int main()
{
    int n,m;
    while(scanf("%d",&n)!=EOF)
    {
        cout<<"fibo : "<<Fib(n)<<endl;
    }
}

////***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        long long int a=1,b=1,k=1;
        while(b!=1000000000000000000)
        {
            if(a%n==0)
            {
                cout<<k<<endl;
                break;
            }
            else
            {
                b*=10;
                a+=b;
                k+=1;
            }
        }
        if(k==1)
        {
            cout<<0<<endl;
        }
    }
    return 0;
}

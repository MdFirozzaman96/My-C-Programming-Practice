#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int>q;
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            return 0;
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                q.push(i);
            }
            int x,k=0;
            cout<<"Discarded cards: ";
            while(!q.empty())
            {
                x=q.front();
                q.pop();
                k+=1;
                if(k<n-2)
                {
                    cout<<x<<", ";
                }
                else if(k==n-1)
                {
                    cout<<x<<endl;
                }
                else if(k==n)
                {
                    cout<<"Remaining card: "<<x<<endl;
                }
                x=q.front();
                q.push(x);
                q.pop();
                k+=1;

            }
        }
    }
}

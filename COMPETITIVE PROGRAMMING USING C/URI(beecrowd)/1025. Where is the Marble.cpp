#include<iostream>
#include<algorithm>
using namespace std;
int Find(int arr[],int n,int q)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==q)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int n,q,test,k=0;
    while(1)
    {
        k+=1;
        cin>>n>>q;
        if(n==0&&q==0)
        {
            return 0;
        }
        int arr[n],Q[q];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<"CASE# "<<k<<":"<<endl;
        for(int i=0;i<q;i++)
        {
            cin>>Q[i];
            test=Find(arr,n,Q[i]);
            if(test==-1)
            {
                cout<<Q[i]<<" not found"<<endl;
            }
            else
            {
                cout<<Q[i]<<" found at "<<test<<endl;
            }
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void Count_Sort(int arr[],int Count[],int n)
{
    for(int i=0;i<n;i++)
    {
        Count[arr[i]]+=1;
    }
}
void Print(int Count[],int mx)
{
    int k=0;
    for(int i=0;i<mx;i++)
    {
        for(int j=1;j<=Count[i];j++)
        {
            k+=1;
            if(k==1)
            {
                cout<<i;
            }
            else
            {
                cout<<" "<<i;
            }
        }
    }
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>mx)
            {
                mx=arr[i];
            }
        }
        mx+=1;
        int Count[mx];
        for(int i=0;i<mx;i++)
        {
            Count[i]=0;
        }
        Count_Sort(arr,Count,n);
        Print(Count,mx);
        cout<<endl;
    }
    return 0;
}

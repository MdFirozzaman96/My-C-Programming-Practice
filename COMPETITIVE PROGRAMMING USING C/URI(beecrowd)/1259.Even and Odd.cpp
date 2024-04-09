#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++ )
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++ )
    {
        if(arr[i]%2==0)
        {
            printf("%d\n",arr[i]);
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]%2==1)
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}


///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>

using namespace std;

int Win(int arr[],int n)
{
    int t=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<(n-i);j++)
        {
            int tmp;
            if(arr[j]<arr[j-1])
            {
                tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
                t+=1;
            }
        }
    }
    return t;
}
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if((Win(arr,n))%2==1)
        {
            cout<<"Marcelo"<<endl;
        }
        else
        {
            cout<<"Carlos"<<endl;
        }
        cin>>n;
    }
    return 0;
}

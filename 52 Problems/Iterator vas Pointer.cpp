#include<stdio.h>
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4};
    vector<int>::iterator i;
    int k;
    cout<<"Traversing without iterator : ";
    for(int j=0;j<4;j++)
    {
       cout<<v[j]<<" ";
    }
    cout<<endl;
    cout<<"Traversing with iterator : ";
    for(i=v.begin();i !=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    v.push_back(130);
    cout<<"   After Inserting 130  "<<endl;
    cout<<"Without Iterator : ";
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
    cout<<endl;
    cout<<"With Iterator : ";
    for(i = v.begin();i !=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}

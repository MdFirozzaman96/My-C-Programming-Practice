/***~~~ALLAH IS ALMIGHTY~~~***/

#include<iostream>

#define white 1
#define gray 2
#define black 3
#define red 130

using namespace std;

int Hierarchy[21][21],color[21],vcolor[20],V,E,space;

void PathR(int n)
{
    color[n]=gray;
    for(int i=0;i<=V;i++)
    {
        if(Hierarchy[n][i]==1)
        {
            for(int j=1;j<=(2*space);j++)
            {
                cout<<" ";
            }
            if(color[i]==white)
            {
                cout<<n<<"-"<<i<<" pathR(G,"<<i<<")"<<endl;
                space+=1;
                PathR(i);
                space-=1;
            }
            else if(color[i]==black||color[i]==gray)
            {
                cout<<n<<"-"<<i<<endl;
            }
        }
    }
    color[n]=black;
}

int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        c+=1;
        cin>>V>>E;
        for(int i=0;i<=V;i++)
        {
            for(int j=0;j<=V;j++)
            {
                Hierarchy[i][j]=0;
            }
        }
        int u,v;
        while(E--)
        {
            cin>>u>>v;
            Hierarchy[u][v]=1;
            vcolor[u]=red;
            vcolor[v]=red;
        }
        for(int i=0;i<=V;i++)
        {
             color[i]=white;
        }

        cout<<"Caso "<<c<<":"<<endl;
        for(int i=0;i<=V;i++)
        {
            if(color[i]==white&&vcolor[i]==red)
            {
                space=1;
                PathR(i);
                cout<<endl;
                /*if(vcolor[i]==red)
                {
                    cout<<endl;
                }*/
            }
        }
    }
    return 0;
}

/*

12 9
0 1
1 5
5 6
0 4
4 2
2 3
7 8
1 7
10 11

11 8

0 1
1 2
3 4
4 3
5 6
6 8
7 9
9 10

6 10

0 2
0 3
0 4
2 1
2 4
3 4
3 5
4 5
4 1
5 1

8 6

1 2
2 3
3 4
2 5
1 6
6 8

*/

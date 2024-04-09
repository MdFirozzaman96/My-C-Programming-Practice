/***~~~ALLAH IS ALMIGHTY~~~***/

#include<iostream>

#define white 1
#define gray 2
#define black 3

using namespace std;

int Maze[51][51],E,V,Move=0;/// Here, all the values of Maze array are't assigned defaultly.

int color[50];

void Labyrinth(int adj)
{
    ///cout<<"adj : "<<adj<<",  Move : "<<Move<<endl;
    color[adj]=gray;
    for(int i=0;i<=V;i++)
    {
        if(Maze[adj][i]==1 && color[i]==white)
        {
            Move+=1;
            Labyrinth(i);
            Move+=1;
        }
    }
    color[adj]=black;
    ///cout<<"adj : "<<adj<<",  Move : "<<Move<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int start,u,v;
        cin>>start>>V>>E;
        for(int i=0;i<=V;i++)
        {
            for(int j=0;j<=V;j++)
            {
                Maze[i][j]=0;
            }
        }
        while(E--)
        {
            cin>>u>>v;
            Maze[u][v]=1;
            Maze[v][u]=1;
        }
        /*for(int i=0;i<=V;i++)
        {
            for(int j=0;j<=V;j++)
            {
                cout<<Maze[i][j]<<" ";
            }
            cout<<endl;
        }*/
        for(int i=0;i<=V;i++)
        {
            color[i]=white;
        }
        Labyrinth(start);
        cout<<Move<<endl;
        Move=0;
    }
    return 0;
}
/*
3
3
5 4

3 1
3 4
1 2
4 5

3
3
9 4

1 2
1 3
3 4
4 5

4
3
5 4

1 2
2 3
3 4
4 5
*/


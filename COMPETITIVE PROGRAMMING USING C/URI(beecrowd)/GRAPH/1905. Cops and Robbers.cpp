/***~~~ALLAH IS ALMIGHTY~~~***/

#include<iostream>
using namespace std;

int Maze[5][5],result;

void Win(int i,int j,int left,int right)
{
    if(Maze[i][j]==1||i==5||j==5)
    {
        return;
    }
    else if(i==4&&j==4)
    {
        result=130;
        return;
    }
    else
    {
        Win(i+1,j,1,1);
        if(left==1)
        {
            Win(i,j+1,1,0);
        }
        else if(right==1)
        {
            Win(i,j-1,0,1);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>Maze[i][j];
            }
        }
        int left=1,right=1;
        result=0;
        Win(0,0,left,right);
        if(result==130)
        {
            cout<<"COPS"<<endl;
        }
        else
        {
            cout<<"ROBBERS"<<endl;
        }
    }
    return 0;
}

/*
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 1
0 0 0 1 0
*/

#include <iostream>
using namespace std;
const int D = 9;

void print(int a[][9],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
bool canplace(int a[][9],int i,int j,int n,int k)
{
    if(a[i][j] != 0) return false;

    for(int x=0;x<n;x++)
    {
        if(a[i][x]==k||a[x][j]==k)
        {
            return false;
        }
    }
    int x=(i/3)*3;
    int y=(j/3)*3;
    for(int p=x;p<x+3;p++)
    {
        for(int l=y;l<y+3;l++)
        {
            if(a[p][l]==k)
            {
                return false;
            }
        }
    }
    return true;
}
bool sudoku(int a[][9],int i,int j,int n)
{
    if(i==n)
    {
        // cout <<"SAd";
        print(a,n);
        return true;
    }
    if(j==n)
    {
        return sudoku(a,i+1,0,n);
    }
    if(a[i][j]!=0)
    {
        return sudoku(a,i,j+1,n);
    }
    for(int number=1;number<=n;number++)
    {
        if(canplace(a,i,j,n,number))
        {
            a[i][j]=number;
            bool t=sudoku(a,i,j+1,n);
            if(t)
            {
                return true;
            }
                a[i][j]=0;
        }
        
    }

    return false;
}
int main()
{
    int a[9][9];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
     int board[D][D] =
    {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    sudoku(a,0,0,n);
    // print(a, n);
}

// https://ide.codingblocks.com/s/241735
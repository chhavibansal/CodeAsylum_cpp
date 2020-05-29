#include<iostream>
using namespace std;
bool isSafe(int board[][10] ,int  i ,int j , int n){
    // no row of that column has a queen placed
    for(int row = 0 ; row < i ; row++){
        if( board[row][j] == 1)
        return false;
    }
    int x=i  , y=j;
    while( x>=0 && y>=0){
        if(board[x][y] == 1)return false;
        x--, y--;
    }
    //right diagonal
    x=i, y=j;
    while( x>=0 && y<n){
        if(board[x][y] == 1)return false;
        x--, y++;
    }
    return true;
}
bool nqueen(int board[][10] , int i ,int n, int &count){
    if( i == n ){
    
        for(int i=0 ; i<n ; i++){
            for(int j = 0 ; j< n ;j++){
                if(board[i][j] == 1) cout<<"Q ";
                else cout<<"_ ";
            }
            cout<<endl;
        }
        count++;
        // cout <<endl<<endl;
        return false;
    }
    for(int   j = 0 ; j < n ; j++){
        if(isSafe(board , i ,j , n)){
            board[i][j] = 1;
            bool nextQueenRakhPaye = nqueen(board , i+1, n, count);
            if(nextQueenRakhPaye) return true;

            //not the right position remove the queen
            board[i][j] =0; //backtrack 
        }

    }
    //you have tried for all positions 
    return false;
}
int main(){
    int n ;
     cin >> n;
     int board[10][10]={0};
    //  cout<<
    int count = 0; 
     nqueen(board, 0 , n, count );
     cout << count;
    //  print( board , n);
}
#include<bits/stdc++.h>
using namespace std;
bool canPlace(int board[10][10] , int row , int col , int size){
    for(int i = 0 ; i < row ; i++){
        if(board[i][col] == 1)
            return false;
    }

    // left upper diagonal 

    int x = row , y = col;
    while(x>=0 and y >=0 ){
        if(board[x][y] == 1) return false;
        x--;
        y--;
    }
    //right upper diagonal
    x = row , y =col;
    while(x>=0 and y < size ){
        if(board[x][y] == 1) return false;
        x--;
        y++;
    }

    return true;

}
bool nQueen(int board[10][10], int row , int size){
    if(row == size){
        //print board
        for(int i = 0 ; i < size ; i++){
            for(int j = 0 ; j < size ; j++){
                if(board[i][j] == 1){
                    cout <<"Q ";
                }else 
                cout <<"_ ";
            }
            cout << endl;
        }
        return true;
    }
    for(int col =  0 ; col < size ; col++){
        if(canPlace(board, row, col , size)){
            board[row][col]  = 1;
            bool QueenRakSakteH= nQueen(board, row+1 , size);
            if(QueenRakSakteH == true)
                return true;
            //backtrack
            board[row][col] = 0;
        }
    }
    return false;
}
int main(){
    int n ;
    cin >> n;
    int board[10][10];
    if(nQueen(board, 0, n)){
        cout << "Yes\n";
    }else{
        cout <<"No\n";
    }
}
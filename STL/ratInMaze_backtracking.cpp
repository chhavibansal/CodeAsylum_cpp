#include<bits/stdc++.h>
using namespace std;
bool findPath(char maze[][10], int soln[][10] , int i , int j , int n , int m ){
    if(maze[i][j] == 'O' and  i == n-1 and j == m-1){
        cout <<"true";
        return true;
    }
    if( i >= n and  j >=m ) return false;


    if( maze[i][j] == 'X')
    return false;
    soln[i][j] = 1;
    bool rigthSuccess = findPath(maze, soln , i , j+1  , n , m);
    bool downSuccess = findPath(maze, soln , i +1 , j  , n , m);

    soln[i][j] = 0;

    if(rigthSuccess || downSuccess) return true;


  
    return false;
}
int main(){
    
}

// string ch[10]= { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

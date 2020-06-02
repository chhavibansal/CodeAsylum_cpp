#include<bits/stdc++.h>
using namespace std;
int LPS_recursive(string str, int  s, int e){
    if(s == e) return 1;
    if( s > e ) return 0;

    int x1 =  0, x2 = 0 ;

    if( str[s] == str[e])
        x1 = 2+ LPS_recursive(str, s+1 , e-1);
    else 
        x2 = max( LPS_recursive( str , s+1 , e) , LPS_recursive(str, s, e-1));

    return max(x1 , x2);
}
int main(){
    string s;
    cin >> s;
    cout << LPS_recursive(s , 0 , s.size()-1 );
}

// https://www.geeksforgeeks.org/longest-palindromic-subsequence-dp-12/
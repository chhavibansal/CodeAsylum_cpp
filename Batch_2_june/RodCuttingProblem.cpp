#include<bits/stdc++.h>
using namespace std;

int memo[1000][1000];
int rodCutting(int *cost , int n, int len ){

    if(len == 0 ) return 0 ;

    int ans = INT_MIN;
    for(int i = 1 ; i <= len ; i++){
        ans = max( ans , cost[i] + rodCutting( cost , n , len - i ));
    }

    return ans;

}

int main(){
    int n;
    cin >> n ;
    int cost[n+1];
    for(int i = 1 ; i <= n ; i++){
        cin >> cost[i];
    }
    int len;
    cin >> len;
    cout << rodCutting(cost , n,len );
}
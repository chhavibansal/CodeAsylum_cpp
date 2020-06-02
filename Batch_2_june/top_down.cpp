#include<bits/stdc++.h>
using namespace std;
int fib_top_down(int n ,int* dp){
    if(n == 0 || n == 1){
        dp[n] = n;
        return dp[n];
    }

    if(dp[n] != -1) return dp[n];
    (dp[n] = (fib_top_down(n-1, dp ) + fib_top_down(n-2, dp) ));
    return dp[n] ;
}
int step_1_2_3(int n , int k ){
    int *dp = new int[n+1];
    dp[0] = 1;
    for(int steps = 1 ; steps <= n ; steps+=1){
            dp[steps] = 0;
            for(int j = 1 ; j <= k ; j++){
                if(steps - j >= 0 ){
                    dp[steps] += dp[steps-j]; 
                }
            }
    }
    return dp[n];
}
int minCoins(int *coins , int amount,int n){
    if(amount <= 0 ) return 0;
    int ans  = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(amount - coins[i] >=0 ){
            int smallAns = minCoins(coins, amount - coins[i] , n);
            if(smallAns != INT_MAX)
                ans = min(ans , smallAns+1);

        }
    }
    return ans;
}
int main(){
    int n ;
    cin >> n;
    int dp[n+1] ;
    for(int i = 0; i <= n ; i++) dp[i] = -1;
    // cout << fib_top_down(n, dp )<<"\n";
    cout << step_1_2_3(n, 3);
}
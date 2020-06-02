#include<bits/stdc++.h>
using namespace std;

int memo[10000];
int top_down_generic(int *coins , int n , int amount){
    if(amount <= 0 ) return  0;

    if(memo[amount] != -1) return memo[amount];

    int smallAns = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(amount - coins[i] >= 0 ){
            int interm = top_down_generic( coins , n , amount- coins[i]);
            smallAns=min( smallAns , interm+1);
            memo[amount]  = smallAns;
        }
    }
    return memo[amount];
}
int recursive_approach(int *coins , int n, int amount ){
    if(amount <= 0 )
    return 0;
    
    int smallAns = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(amount- coins[i] >= 0 ){
            int kuchAnsAya  = recursive_approach(coins , n , amount-coins[i]);
            smallAns = min(smallAns , 1 + kuchAnsAya);
        }
        
    }

    return smallAns;
}

int top_down(int *coins , int n , int amount){
    if(amount <= 0 ) return     1;

    if(memo[amount] != -1) return memo[amount];

    int x1 , x2 , x3;
    x1 = x2 =x3 = INT_MAX;
    x1 = top_down(coins , n , amount-1);
     x2 = top_down(coins , n , amount-7);
     x3 = top_down(coins , n , amount - 10);


    int small = 1 + min({x1 , x2 , x3});
    memo[amount] = small;
    return memo[amount];
}

int main(){
    int coins[] = {1,7, 10 };
    int n = 3;
    int amount;
    cin >> amount;
   cout <<  recursive_approach(coins , n, amount)<<"\n";
   
   for(int i = 0 ; i < 10000 ; i++)
   memo[i] = -1;
    cout << top_down_generic(coins , n , amount);
//    cout << top_down( coins , n , amount);

}
// https://leetcode.com/problems/coin-change/
#include<bits/stdc++.h>
using namespace std;

int memo[1000][1000];

int maxProfit(int *cost , int s , int e , int yr){
    // base ccase
    if( s > e ) return 0;
    if(memo[s][e] !=  -1 ) return memo[s][e];

    int a = cost[s]*yr+ maxProfit(cost , s+1 , e , yr+1);

    int b = cost[e]*yr + maxProfit(cost , s , e-1 , yr+1);
    memo[s][e] = max(a, b);
    return  memo[s][e];

}

int main(){
    int cost[] = {2, 3,  5, 1, 4 };
    int n = 5;
    int yr  = 1;
    memset(memo , -1 , sizeof(memo));
    cout << maxProfit(cost ,0 , n-1 , yr );

}
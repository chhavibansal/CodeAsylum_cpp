#include<bits/stdc++.h>
using namespace std;
int reduceToOne(int num){
    if(num == 1) return 0;
    int a , b , c;
    a = b = c = INT_MAX;
    if(num%3 == 0 )
    a = 1+ reduceToOne(num/3);
    if(num%2 == 0 )
    b = 1+ reduceToOne(num/2);

    c = 1 + reduceToOne(num-1);


    return min({a , b , c});

}


int bottom_up(int num){
    int dp[1000] = {0};
    
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    int a , b,  c;
    for(int i = 4 ; i <= num ; i++){
        a  = b = c = INT_MAX;
        if(i%3 == 0 )
            a = 1 + dp[i/3];
        if(i%2 == 0 )
            b = 1 + dp[i/2];

         c= 1 + dp[i-1];

         dp[i] = min({a, b, c});
    }
    return dp[num];
}

int main(){
    int num;
    cin >> num;
    // cout << reduceToOne(num);
    cout <<"\n";
    cout << bottom_up(num);
}
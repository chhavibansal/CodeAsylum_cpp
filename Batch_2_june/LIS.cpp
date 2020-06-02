#include<bits/stdc++.h>
using namespace std;

int LongestincreasingSubsequence(int *arr, int n ){
    int dp[n] ={0};
    for(int i = 0 ; i < n ; i++)
        dp[i] = 1;
    int maxAns = 1 ;
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j < i  ; j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i] , dp[j] + 1);
                maxAns = max(maxAns , dp[i]);
            }
        }
    }
    return maxAns;

}
int main(){
    int arr[]={10 , 22, 9, 33,  21, 50 , 41 , 60 };
    int n = 8;
    cout << LongestincreasingSubsequence(arr, n );
}
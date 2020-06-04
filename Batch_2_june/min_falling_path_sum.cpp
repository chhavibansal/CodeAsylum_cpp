class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        
        int n = A.size() , m = A[0].size();
        int ans =  INT_MAX;
        for(int i =  1; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++){
                A[i][j] = A[i][j]+ min({A[i-1][j], A[i-1][max(0,j-1)],A[i-1][min(m-1 , j+1)] });
                if(i == n-1 ){
                    ans = min(ans, A[i][j]);
                }
            }
        }
        // for(int i = n-1 ; i < n ; i++){
            for(int j= 0 ; j < m ; j++)
                ans = min(ans , A[n-1][j]);
        // }
            return ans;
    }
        
        
        
};

// https://leetcode.com/problems/minimum-falling-path-sum/
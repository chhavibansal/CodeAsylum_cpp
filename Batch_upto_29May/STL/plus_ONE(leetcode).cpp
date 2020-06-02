// https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& A) {
       vector<int> temp;
        int n = A.size() -1;
        int sum =   A[n]+1;
       temp.push_back(sum%10);
        int c = sum/10;
        n--;
        while(n >= 0 ){
         sum = A[n]+c;
            temp.push_back(sum%10);
            c = sum/10;
            n--;
        }
        if(c > 0 )
            temp.push_back(c);
        reverse(temp.begin() , temp.end());
        return temp;
    }
};
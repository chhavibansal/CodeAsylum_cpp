class Solution {
public:
    vector<vector<int>>ans;
    void findAll(vector<int> nums , vector<int> temp , int s){
        
        if(s > nums.size() ) return;
        ans.push_back(temp);
        for(int i =  s; i <nums.size() ; i++){
            temp.push_back(nums[i]);
            findAll(nums, temp , i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        findAll(nums, temp , 0 );
        return ans;
    }
    
};

// https://leetcode.com/problems/subsets/
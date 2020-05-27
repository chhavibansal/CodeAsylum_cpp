class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 0 , e = num;
        while(s <= e){
            int mid = (s+e)/2; // s+ (e-s)/2
            if(mid == num/(float)(mid)) return true;
            
            if(mid < num/(float)(mid))  s = mid+1;
            else e = mid-1;
            
        }
        return false;
    }
};
// https://leetcode.com/problems/valid-perfect-square/


// https://leetcode.com/problems/search-a-2d-matrix/


  int s = 0 , e= nums.size()-1 ;
        while(s <= e){
            int mid = (s+e)/2;
            if(nums[mid] == target) return mid;
            if(nums[s] <= nums[mid]){
                if(target >= nums[s] and target <= nums[mid]){
                    e = mid-1;
                    
                }else s= mid+1;
            }else{
                if(target >= nums[mid] and target <= nums[e])
                    s = mid+1;
                else e = mid-1;
            }
        }
        return -1;
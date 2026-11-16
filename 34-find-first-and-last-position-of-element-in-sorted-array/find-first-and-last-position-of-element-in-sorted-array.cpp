class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) return {-1,-1};

        int lb = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        int ub = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        if(lb == ub){
            return {-1,-1};
        }
        else{
            return {lb, ub-1};
        }
    }
};
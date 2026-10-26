class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0 ; i<nums1.size() ; i++){
            int target = nums1[i];
            int found = -1;

            for(int j = 0 ; j<nums2.size() ; j++){
                if(target == nums2[j]){
                    found = j;
                    break;
                }
            }

            int greater = -1;
            for(int k = found+1 ; k<nums2.size() ; k++){
                if(nums2[k] > target){
                    greater = nums2[k];
                    break;
                }
            }
            ans.push_back(greater);
        }
        return ans;
    }

};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l = nums[0], g = nums[0];
        for(int i=1;i<nums.size();i++){
            l = max(nums[i] , l+nums[i]);
            g = max(l , g);
        }
        return g;
    }
};
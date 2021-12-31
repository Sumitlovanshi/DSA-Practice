class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int , int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int sum = target - nums[i];
            if(mp.count(sum) > 0){
                v.push_back(i);
                v.push_back(mp[sum]);
                return v;
            }
            mp[nums[i]] = i;
        }
        return v;
    }
};
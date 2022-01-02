class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, m = 0;
        for(int n:nums){
            if(cnt ==0){
                m = n;
            }
            if(m == n) cnt++;
            else cnt--;
        }
        return m;
    }
};
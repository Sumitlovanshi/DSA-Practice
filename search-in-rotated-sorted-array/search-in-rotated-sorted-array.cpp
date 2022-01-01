class Solution {
    int findMinIndex(vector<int>& nums) {
        int n = nums.size();
        // no rotation
        if (nums[0] < nums.back()) {
            return 0;
        }
        
        int lo = 0, hi = n-1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            
            if (mid+1 < n and nums[mid] > nums[mid+1]) {
                return mid+1;
            }
            if (mid > 0 and nums[mid-1] > nums[mid]) {
                return mid;
            }
            
            if (nums[mid] < nums[0]) {
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
        
        return hi;
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int x = findMinIndex(nums);
        int lo, hi, mid;
        if (nums[x] <= target and target <= nums.back()) {
            lo = x;
            hi = n-1;
        }
        else {
            lo = 0;
            hi = x - 1;
        }
        
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            
            if (nums[mid] > target) {
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
        
        return -1;
    }
};
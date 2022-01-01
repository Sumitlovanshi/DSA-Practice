class Solution {
public:
    
    int bin(vector<int>& nums , int l , int h , int n){
        int mid = (l+h)/2;
        int prev = nums[(mid+n -1)% n];
        int nxt = nums[(mid + 1 )%n];
        if( nums[mid] < nums[prev] && nums[mid] < nums[nxt]){
            return nums[mid];
        }
        else if(nums[l] < nums[mid] ){
            return bin(nums, mid+1 , h , n);
        }
        else{
            return bin(nums, l , mid-1 , n);
        }
    }
    
    int findMin(vector<int>& nums) {
        
        int left=0;
        int right=nums.size()-1;
        
        while(left<right){
            int mid = (left+right)/2;
            if( mid>0 && nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1] ){
                return nums[mid];
            }
            else if(nums[mid]>nums[right]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return nums[left];
    }
};
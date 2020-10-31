// A peak element is an element that is greater than its neighbors.
// Given an input array nums, where nums[i] ≠ nums[i+1], find a peak element and return its index.
// The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.
// You may imagine that nums[-1] = nums[n] = -∞.

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==2){
            if(nums[0]>nums[1])
                return 0;
            else
                return 1;
        }
        for(int i=1;i<nums.size();i++){
            if(i==nums.size()-1 && nums[nums.size()-1]>nums[nums.size()-2])
                return nums.size()-1;
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
                return i;
            
        }
        return 0;
    }
};
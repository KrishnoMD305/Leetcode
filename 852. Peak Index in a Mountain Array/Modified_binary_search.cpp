// This is modified binary search
// There will be 2 slope. One is increasing and the other is decreasing. The intersection is the peak element.
// 1st we have to check in left increasing and then we have to check in right decreasing 
// Time Complexity: O(log n) 


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int start = 1, end = nums.size()-2;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid-1] < nums[mid]){
                start = mid+1;
            }else{
                end = mid - 1;
            }
        }
        return -1;
    }
};

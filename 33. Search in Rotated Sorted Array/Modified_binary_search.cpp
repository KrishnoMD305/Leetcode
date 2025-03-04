// This is O(log n)
/* It is rotated sorted array. So traditional binary search will not work because not entire array is sorted. 
But observable matter is that if we find a middle then notice that there will be two possibilities:
    1. Left array is sorted and right is unsorted.
    2. Right array is sorted and left is unsorted.
So, first we have to check that if target is found in left array or right array. Based on this we have to apply the binary search.   */


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0; int end = nums.size()-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[start]<=nums[mid]){
                if(nums[start]<=target && target<=nums[mid]){
                    end = mid - 1;
                }else{
                    start = mid +1;
                }
            }else{
                if(nums[mid]<=target && target<=nums[end]){
                    start = mid +1;
                }else{
                    end = mid -1;
                }
            }
        }
        return -1;
    }
};

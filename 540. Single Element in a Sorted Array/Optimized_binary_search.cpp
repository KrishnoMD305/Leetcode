// Time Complexity: O(log n)   Space Complexity: O(1)
/* The main logic is the find the search space. Here, every element has duplicate except one element. So the total number will be odd. So if in search space there are
odd number of element the search will be there.
Another is mid is even or odd. If mid is even, then the left and right will be even number. If mid element is not target element, then if mid = mid-1 then left search else right search.
If mid elemeent is odd then left and right will be odd. If mid element is not target element, then if mid = mid-1 then right search else left search.  
Edge cases also need to be handled properly.    */

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        
        int start = 0, end = n-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(mid == 0 && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            if(mid==n-1 && nums[mid] != nums[mid-1]){
                return nums[mid];
            }
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            if(mid%2==0){
                if(nums[mid]==nums[mid-1]){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }else{
                if(nums[mid]==nums[mid-1]){
                    start = mid + 1;
                }else{
                    end = mid - 1;
                }
            }
        
        }
        return -1;
    }
};

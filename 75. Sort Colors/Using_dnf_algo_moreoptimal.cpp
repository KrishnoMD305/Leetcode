// Using the Dutch National Flag Algorithm
// There are three pointers low, middle, high
// 0s will be 0 to low-1, 1s will be low to middle-1, middle to high will be unsorted, high+1 to n-1 will be 2s

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid = 0, high = nums.size()-1, low = 0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid]==2){
                swap(nums[high],nums[mid]);
                high--;
            }else{
                mid++;
            }
        }
    }
};

// Linear Search is brute force
// Edge Case need to be handled properly if the target answer exists in 0 or n-1 index


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        long long n = nums.size();
        if(n==1){
            return nums[0];
        }
        if(nums[0] != nums[1]){
            return nums[0];
        }
        if(nums[n-1] != nums[n-2]){
            return nums[n-1];
        }
        long long index = -1;
        for(long long i=1; i<n-1; i++){
            if(nums[i] != nums[i-1] && nums[i] != nums[i+1]){
                index = i;
            }
        }
        return nums[index];
    }
};

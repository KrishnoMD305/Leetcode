class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        int min=INT_MAX; int index;
        for(int i=0;i<nums.size();i++){
            if(abs(target-nums[i])<min){
                min=abs(target-nums[i]);
                index=i;
            }
        }
        if(nums[index]>target){
            return index;
        }else{
            return index+1;
        }
    }
};

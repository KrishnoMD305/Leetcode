// 1660434641
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0, end=nums.size();
        while(start<end){
            int mid = (end+start)/2;
            if(nums[mid]>mid){
                end = mid;
            }else{
                start = mid + 1;
            }
        }
        return start;
    }
};

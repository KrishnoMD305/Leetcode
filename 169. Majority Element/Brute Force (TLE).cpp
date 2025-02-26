class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int r;
        for(int i=0; i<n; i++){
            int c=0;
            for(int j=0; j<n; j++){
                if(nums[i] == nums[j]){
                    c++;
                }
            }
            if(c > n/2){
                r = nums[i];
            }
        }
        return r;
    }
};

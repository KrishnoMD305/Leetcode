class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int org_sum = n*(n+1)/2;
        int exp_sum = 0;
        for(int i : nums){
            exp_sum += i;
        }
        return org_sum-exp_sum;
    }
};

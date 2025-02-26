class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n==1){return nums[0];}
        long long sum = INT_MIN,c=0;
        for(int i=0; i<n; i++){
        c += nums[i];
        if(c>sum){sum = c;}
        if(c<0){c=0;}
    }
    return sum;
    }
};

// Time: O(n)
// Space: O(1)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> r(n);
        int prefix = 1;
        r[0] = 1;
        for(int i=1; i<n; i++){
            prefix=prefix * nums[i-1];
            r[i] = prefix;
        }
        int suffix = 1;
        for(int i=n-2; i>=0; i--){
            suffix=suffix * nums[i+1];
            r[i] *= suffix;
        }
        return r;
    }
};

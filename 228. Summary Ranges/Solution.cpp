class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();
        if(n==0){
            return ans;
        }
        int i = 0;
        while(i<n){
            int l = i;
            while(i+1<n && nums[i]==nums[i+1]-1){
                i++;
            }
            if(l==i){
                ans.push_back(to_string(nums[l]));
            }else{
                ans.push_back(to_string(nums[l])+"->"+to_string(nums[i]));
            }
            i++;
        }
        return ans;
    }
};

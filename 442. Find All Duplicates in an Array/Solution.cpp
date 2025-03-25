class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> r;
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                if(r.empty() || r.back() != nums[i]){
                    r.push_back(nums[i]);
                }
            }
        }
        return r;
    }
};

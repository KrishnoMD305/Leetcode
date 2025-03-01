// Time complexity: O(n^2) & Space : O(1) without the r vector
// It will give TLE

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> r;
        for(int i=0; i<nums.size(); i++){
            int p=1;
            for(int j=0; j<nums.size(); j++){
                if(i != j){p *=nums[j];}
            }
            r.push_back(p);
        }
        return r;
    }
};

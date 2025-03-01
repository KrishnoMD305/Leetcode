class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> r;
        for(int i=0; i<nums.size(); i++){
            int p=1;
            for(int j=0; j<nums.size(); j++){
                if(i != j){
                    p *=nums[j];
                }
            }
            r.push_back(p);
        }
        return r;
    }
};

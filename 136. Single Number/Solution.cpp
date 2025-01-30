class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> v,o;
        long long a=nums[0];
        v.push_back(a);
        for(int i=1; i<nums.size(); i++){
            if(a != nums[i]){
                a=nums[i];
                v.push_back(a);
            }
        }
        for(int i=0; i<v.size(); i++){
            int count=0;
            for(int j=0; j<nums.size(); j++){
                if(v[i]==nums[j]){
                    count++;
                }
            }
            o.push_back(count);
        }
        long long r;
        for(int i=0; i<o.size(); i++){
            if(o[i]==1){
                r= v[i];
                break;
            }
        }
        return r;
    }
};

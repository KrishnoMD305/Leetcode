class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int m = 1;
        sort(nums.begin(),nums.end());
        for(int i:nums){
            if(i>0){
                if(i==m){m++;}
                else if(m<i){break;}
            }
        }
        return m;
    }
    
};

// Time Complexity: O(n) 
// Using the properties of xor
//        x^0 = x  
//        x^x = 0

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int r = 0;
        for(int i=0; i<nums.size(); i++){
            r ^= nums[i];
        }
        return r;
    }
};

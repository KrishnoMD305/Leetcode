// Sorting - O(n log(n))
// O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int in=nums[0];
        int f=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==in){
                f++;
                if(f> nums.size()/2){
                    return nums[i];
                }
            }else{             
                    f=1;
                    in = nums[i];
            }
        }
        return -1;
    }
};

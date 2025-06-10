class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        bool valid = false;
        int tar_cnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                valid = true;
                tar_cnt++;
            }
        }
        if(!valid){
            return {-1,-1};
        }else{
            if(tar_cnt==1){
                for(int i=0; i<nums.size(); i++){
                    if(nums[i]==target){
                        return {i,i};
                    }
                }
            }
            int start=-1, end=-1;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==target){
                    if(start==-1){
                        start = i;
                    }else{
                        end = i;
                    }
                }
            }
            return {start,end};
        }
    }
};

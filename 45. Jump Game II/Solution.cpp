class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int i=0,cnt=0,far=0,c=0;
        while(i<n-1){
            far = max(far,i+nums[i]);
            if(i==c){
                cnt++;
                c = far;
            }
            i++;
        }
        return cnt;
    }
};

// Time Complexity: O(n) but space is O(n)
// Accepted

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> r,p(n),s(n);
        p[0]=1;
        for(int i=1; i<n; i++){
            p[i]=p[i-1] * nums[i-1];
        }
        s[n-1]=1;
        for(int i=n-2; i>=0; i--){
            s[i]=s[i+1] * nums[i+1];
        }
        for(int i=0; i<n; i++){
            int a= p[i] * s[i]; r.push_back(a);
        }
        return r;
    }
};

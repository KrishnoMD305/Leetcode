
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        int lmax = height[l], rmax = height[r];
        int res = 0;
        while(l<r){
            if(lmax<rmax){
                l++;
                lmax = max(lmax,height[l]);
                res += lmax - height[l];
            }else{
                r--;
                rmax = max(rmax,height[r]);
                res += rmax - height[r];
            }
        }
        return res;
    }
};

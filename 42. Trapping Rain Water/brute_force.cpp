class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> max_left,max_right(n);
        int l =height[0];
        max_left.push_back(l);
        
        for(int i=1; i<height.size(); i++){
            l = max(l,height[i]);
            max_left.push_back(l);
        }
        int r = height[height.size()-1];
        max_right[n-1] = r;
        for(int i= height.size()-2; i>=0; i--){
            r = max(r,height[i]);
            max_right[i] = r;
        }
        int d=0;
        for(int i=0; i<height.size(); i++){
            int f = min(max_left[i],max_right[i]) - height[i];
            if(f>0){
                d += f;
            }
        }
        return d;
    }
};

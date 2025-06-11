class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if(intervals.size()==1){
            return {intervals[0]};
        }
        sort(intervals.begin(),intervals.end());
        int f1=intervals[0][0], l1=intervals[0][1];
        for(int i=1; i<intervals.size();i++){
            int f=intervals[i][0], l=intervals[i][1];
            if(f<=l1){
                l1 = max(l,l1);
            }else{
                result.push_back({f1,l1});
                f1 = f; 
                l1 = l;
            }
        }
        result.push_back({f1,l1});
        return result;
    }
};

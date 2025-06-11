class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if(intervals.empty()){
            return result;
        }
        sort(intervals.begin(),intervals.end());
        result.reserve(intervals.size());
        int f1=intervals[0][0], l1=intervals[0][1];
        for(int i=1; i<intervals.size();i++){
            int f=intervals[i][0], l=intervals[i][1];
            if(f<=l1){
                l1 = max(l,l1);
            }else{
                result.emplace_back(vector<int>{f1,l1});
                f1 = f; 
                l1 = l;
            }
        }
        result.emplace_back(vector<int>{f1,l1});
        return result;
    }
};

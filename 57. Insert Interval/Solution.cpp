class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        if(intervals.empty()){return {};}
        vector<vector<int>> result;
        int f1 = intervals[0][0], l1 = intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            int f = intervals[i][0], l = intervals[i][1];
            if(f<=l1){
                l1 = max(l1,l);
            }else{
                result.push_back({f1,l1});
                f1 = f; l1 = l;
            }
        }
        result.push_back({f1,l1});
        return result;
    }
};

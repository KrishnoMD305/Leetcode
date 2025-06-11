class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()){
            return {};
        }
        sort(intervals.begin(),intervals.end());
        int j = 0;
        for(int i=1; i<intervals.size();i++){
            if(intervals[j][1]>=intervals[i][0]){
                intervals[j][1] = max(intervals[j][1],intervals[i][1]);
            }else{
                j++;
                intervals[j] = intervals[i];
            }
        }
        intervals.erase(intervals.begin()+j+1,intervals.end());
        return intervals;
    }
};

class Solution {
public:
    void genrt(int start, int target, vector<int> &candi, vector<int> &temp, vector<vector<int>> &res){
        if(target==0){
            res.push_back(temp);
            return;
        }
        for(int i=start; i<candi.size(); i++){
            if(i>start && candi[i]==candi[i-1]){
                continue;
            }
            if(candi[i]>target){
                break;
            }
            temp.push_back(candi[i]);
            genrt(i+1,target-candi[i],candi,temp,res);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> re;
        sort(candidates.begin(),candidates.end());
        genrt(0,target,candidates,temp,re);
        return re;
    }
};

class Solution {
public:
    void perm(vector<int> v,set<vector<int>> &r){
        sort(v.begin(),v.end());
        do{
            r.insert(v);
        }while(next_permutation(v.begin(),v.end()));
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> r;
        vector<vector<int>> result;
        perm(nums,r);
        for(auto i : r){
            result.push_back(i);
        }
        return result;
    }
};

class Solution {
public:
    void perm(vector<int> v,vector<vector<int>> &re){
        sort(v.begin(),v.end());
        do{
            re.push_back(v);
        }while(next_permutation(v.begin(),v.end()));
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> re;
        perm(nums,re);
        return re;
    }
};

class Solution {
public:
    void perm(vector<int> v,int a,set<vector<int>> &r){
        if(a==v.size()){
            r.insert(v);
            return;
        }
        for(int i=a; i<v.size(); i++){
            swap(v[a],v[i]);
            perm(v,a+1,r);
            swap(v[a],v[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> r;
        vector<vector<int>> result;
        perm(nums,0,r);
        for(auto i : r){
            result.push_back(i);
        }
        return result;
    }
};
